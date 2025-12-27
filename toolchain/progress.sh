#!/bin/bash

#TODO Maxos only
SCRIPTDIR=$(dirname "$BASH_SOURCE")
source $SCRIPTDIR/../../../toolchain/MaxOS.sh

# Input variables
OUTPUT_DEST="readme"
SHOULD_CHECK="all"
HANDLE_MISSING="ignore"

# Parse the args
while [ "$#" -gt "0" ]; do
  case "$1" in
    --output)
      OUTPUT_DEST="$2"
      shift 2
      ;;
    --check)
      SHOULD_CHECK="$2"
      shift 2
      ;;
    --missing)
        HANDLE_MISSING="$2"
        shift 2
        ;;
    *)
      warn "Error: Unknown argument $1"
      ;;
  esac
done

# Validate the args
case "$OUTPUT_DEST" in
    print|readme) ;;
    *) fail "Error: Invalid argument $OUTPUT_DEST must be one of print|readme" ;;
esac
case "$SHOULD_CHECK" in
    headers|functions|all) ;;
    *) fail "Error: Invalid argument $SHOULD_CHECK must be one of headers|functions|all" ;;
esac
case "$HANDLE_MISSING" in
    warn|error|ignore) ;;
    *) fail "Error: Invalid argument HANDLE_MISSING must be one of warn|error|ignore" ;;
esac

BASE_URL="https://pubs.opengroup.org/onlinepubs/9799919799/idx/"
HEADER_FILE="head.html"
FUNCTIONS_FILE="functions.html"

# Download the indexes of the headers and functions
if [ ! -f $HEADER_FILE ]; then
    msg "Downloading $HEADER_FILE"
    wget "$BASE_URL/$HEADER_FILE" || fail "Couldn't download $HEADER_FILE"
fi
if [ ! -f $FUNCTIONS_FILE ]; then
    msg "Downloading $FUNCTIONS_FILE"
    wget "$BASE_URL/$FUNCTIONS_FILE" || fail "Couldn't download $FUNCTIONS_FILE"
fi

# Extract the headers and functions
headers=$(sed -n 's|.*&lt;\([^&]*\)&gt;.*|\1|p'  $HEADER_FILE)
functions=$(sed -n 's|.*<i>\([^<]*\)</i>().*|\1|p' "$FUNCTIONS_FILE")

# Check headers
correct_headers=0
missing_headers=0
for header in $headers; do

    # Make sure header exists
    if [[ -f "../include/$header" || "$SHOULD_CHECK" == "functions" ]]; then
          ((correct_headers++))
          continue
    fi
    ((missing_headers++))

    # Warn if applicable
    case "$HANDLE_MISSING" in
        ignore)
            ;;
        warn)
            warn "Missing header: $header"
            ;;
        error)
            fail "Missing header: $header"
            ;;
    esac
done

# Check functions
implemented_functions=$(grep -hE '^[[:space:]]*[A-Za-z_][A-Za-z0-9_[:space:]\*]*[[:space:]]+[A-Za-z_][A-Za-z0-9_]*[[:space:]]*\([^;]*\)[[:space:]]*\{' ../src/*.c \
  | sed -E 's/.*[[:space:]\*]([A-Za-z_][A-Za-z0-9_]*)[[:space:]]*\(.*/\1/' \
  | sort -u)
correct_functions=0
missing_functions=0
for func in $functions; do

    # Make sure function exists
    if printf '%s\n' "$implemented_functions" | grep -xFq -- "$func"; then
          ((correct_functions++))
          continue
    fi
    ((missing_functions++))


    # Warn if applicable
    case "$HANDLE_MISSING" in
        ignore)
            ;;
        warn)
            warn "Missing function: $func"
            ;;
        error)
            fail "Missing function: $func"
            ;;
    esac
done

README_FILE="../README.md"

# Headers totals & percentage
total_headers=$((correct_headers + missing_headers))
if [ "$total_headers" -eq 0 ]; then
  percent_headers="0.00"
else
  percent_headers=$(awk -v c="$correct_headers" -v t="$total_headers" 'BEGIN{printf "%.2f", (c/t)*100}')
fi

# Colour: red if none, green if all, orange otherwise
if [ "$total_headers" -eq 0 ] || [ "$correct_headers" -eq 0 ]; then
  color_headers="red"
elif [ "$correct_headers" -eq "$total_headers" ]; then
  color_headers="green"
else
  color_headers="orange"
fi

# Create the label
badge_url_headers="https://img.shields.io/badge/Headers-$correct_headers%2F$total_headers%20($percent_headers%25)-$color_headers?style=for-the-badge"

# Functions totals & percentage
total_functions=$((correct_functions + missing_functions))
if [ "$total_functions" -eq 0 ]; then
  percent_functions="0.00"
else
  percent_functions=$(awk -v c="$correct_functions" -v t="$total_functions" 'BEGIN{printf "%.2f", (c/t)*100}')
fi

if [ "$total_functions" -eq 0 ] || [ "$correct_functions" -eq 0 ]; then
  color_functions="red"
elif [ "$correct_functions" -eq "$total_functions" ]; then
  color_functions="green"
else
  color_functions="orange"
fi

# Create the label
badge_url_functions="https://img.shields.io/badge/Functions-$correct_functions%2F$total_functions%20($percent_functions%25)-$color_functions?style=for-the-badge"

case "$OUTPUT_DEST" in
    print)
        case "$SHOULD_CHECK" in
            headers|all)
                msg "Headers: $correct_headers/$total_headers ($percent_headers%%)"
                ;;
        esac

        case "$SHOULD_CHECK" in
            functions|all)
                msg "Functions: $correct_functions/$total_functions ($percent_functions%%)"
                ;;
        esac
        ;;
    readme)
        case "$SHOULD_CHECK" in
            headers|all)
                sed -i.bak -E "s|^\[headers-shield\]: .*|\[headers-shield\]: $badge_url_headers|" "$README_FILE"
                grep -q "^\[headers-shield\]:" "$README_FILE" || printf "\n[headers-shield]: %s\n" "$badge_url_headers" >> "$README_FILE"
                ;;
        esac

        case "$SHOULD_CHECK" in
            functions|all)
                sed -i.bak -E "s|^\[functions-shield\]: .*|\[functions-shield\]: $badge_url_functions|" "$README_FILE"
                grep -q "^\[functions-shield\]:" "$README_FILE" || printf "\n[functions-shield]: %s\n" "$badge_url_functions" >> "$README_FILE"
                ;;
        esac
        ;;
esac
