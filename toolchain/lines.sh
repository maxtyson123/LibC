# Ensure cloc is installed
if ! command -v cloc >/dev/null 2>&1; then
    sudo apt update
    sudo apt install -y cloc
fi

# Get the total
total=$(
  cloc ../ --exclude-dir=build,cmake-debug,docs,cross_compiler |
  awk '/SUM:/ {print $4 + $5}'
)

# Abbreviate the total
abbrev() {
    awk -v n="$1" '
    BEGIN {
        if (n >= 1000000)      printf "%.1fm", n/1000000;
        else if (n >= 1000)    printf "%.1fk", n/1000;
        else                   printf "%d", n;
    }'
}
total_abbrev="$(abbrev "$total")"

# Save to a badge data
JSON_DIR="../docs/doxy/metrics"
LINES_JSON="$JSON_DIR/lines.json"
cat > "$LINES_JSON" <<EOF
                    {
                      "schemaVersion": 1,
                      "label": "Lines of code",
                      "message": "$total_abbrev",
                      "color": "blue",
                      "style": "for-the-badge"
                    }
EOF