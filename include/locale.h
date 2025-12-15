/**
 * @file locale.h
 * @brief Defines langauge and region specific behaviour
 *
 * @see https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/locale.h.html
 *
 * @date 15 December 2025
 * @author Max Tyson
 */

#include <libc_common.h>

#ifndef LIBC_LOCALE_H
#define LIBC_LOCALE_H

CPP_START

/**
 * @enum SignPosition
 * @brief Defines where a sign string should be placed
 */
enum SignPosition {

    IMPLIED_WITH_PARENTHESES,
    BEFORE_VALUE_AND_SYMBOL,
    AFTER_VALUE_AND_SYMBOL,
    BEFORE_VALUE,
    AFTER_VALUE,

};

/**
 * @struct lconv
 * @brief Defines local specfic formating for numbers and money
 */
struct lconv {

    char*   decimal_point;      ///< String used to separate the whole part of the number from the fraction part
    char*   thousands_sep;      ///< String used to separate digit groups
    char*   grouping;           ///< How to group digits

    char*   currency_symbol;    ///< Local currency symbol (ie '$')
    char*   int_curr_symbol;    ///< 4 character international currency symbol (ISO 4217)

    char*   mon_decimal_point;  ///< String used to separate the whole part of the monetary value from the fraction part
    char*   mon_thousands_sep;  ///< String used to separate monetary digit groups
    char*   mon_grouping;       ///< How to group monetary digits

    char    frac_digits;        ///< How many digits does the local currency use for decimals
    char    int_frac_digits;    ///< How many digits does the internation currency use for decimals

    char*   positive_sign;      ///< String used to denote a positive value
    char*   negative_sign;      ///< String used to denote a negative value

    char    p_cs_precedes;      ///< Where to place the currency symbol for a positive value (after = 0, before = 1)
    char    n_cs_precedes;      ///< Where to place the currency symbol for a negative value (after = 0, before = 1)
    char    p_sep_by_space;     ///< Whether to add a space between a positive value and the symbol (boolean)
    char    n_sep_by_space;     ///< Whether to add a space between a negative value and the symbol (boolean)

    char    int_p_cs_precedes;  ///< Where to place the currency symbol for a positive international value (after = 0, before = 1)
    char    int_n_cs_precedes;  ///< Where to place the currency symbol for a negative international value (after = 0, before = 1)
    char    int_p_sep_by_space; ///< Whether to add a space between a positive international value and the symbol (boolean)
    char    int_n_sep_by_space; ///< Whether to add a space between a negative international value and the symbol (boolean)

    char    p_sign_posn;        ///< Where to place the positive sign (@see SignPosition)
    char    n_sign_posn;        ///< Where to place the negative sign (@see SignPosition)

    char    int_p_sign_posn;    ///< Where to place the positive sign for an international value (@see SignPosition)
    char    int_n_sign_posn;    ///< Where to place the negative sign for an international value (@see SignPosition)

};

#define LC_ALL      0   ///< Set or query all locale categories at once
#define LC_COLLATE  1   ///< String collation rules (sorting and comparison order)
#define LC_CTYPE    2   ///< Character classification, case conversion, encoding
#define LC_MESSAGES 3   ///< Language used for diagnostic and system messages
#define LC_MONETARY 4   ///< Currency symbols, monetary formatting, sign placement
#define LC_NUMERIC  5   ///< Non-monetary numeric formatting (decimal point, grouping)
#define LC_TIME     6   ///< Date and time formatting (month/day names, formats)

#define LC_ALL_MASK         (LC_COLLATE_MASK | LC_CTYPE_MASK | LC_MESSAGES_MASK | LC_MONETARY_MASK | LC_NUMERIC_MASK | LC_TIME_MASK)    ///< Set or query all locale categories at once
#define LC_COLLATE_MASK     (1 << 0)    ///< String collation (sorting, comparison)
#define LC_CTYPE_MASK       (1 << 1)    ///< Character classification and case mapping
#define LC_MESSAGES_MASK    (1 << 2)    ///< Language of diagnostic messages
#define LC_MONETARY_MASK    (1 << 3)    ///< Monetary formatting rules
#define LC_NUMERIC_MASK     (1 << 4)    ///< Numeric formatting (decimal point, grouping)
#define LC_TIME_MASK        (1 << 5)    ///< Date and time formatting

#define LC_GLOBAL_LOCALE ((locale_t)0)  ///< Identifier of the global local

/**
 * @struct __locale
 * @brief Private struct containing local data for each category
 *
 * @typedef locale_t
 * @brief Alais for the __local struct
 */
typedef struct __locale {

    const char* collate;
    const char* ctype;
    const char* messages;
    const char* monetary;
    const char* numeric;
    const char* time;

} locale_t;

locale_t        duplocale(locale_t);
void            freelocale(locale_t);
struct lconv*   localeconv(void);
locale_t        newlocale(int, const char *, locale_t);
char*           setlocale(int, const char *);
locale_t        uselocale (locale_t);

CPP_END

#endif //LIBC_LOCALE_H