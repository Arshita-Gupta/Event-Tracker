#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "events.h"

int is_valid_date(const char *date) {
    int year, month, day;

    if (sscanf(date, "%d-%d-%d", &year, &month, &day) != 3) {
        return 0;
    }

    if (month < 1 || month > 12 || day < 1 || day > 31) {
        return 0;
    }

    return 1;
}

void trim_whitespace(char *str) {
    char *start = str;
    char *end;

    while (isspace((unsigned char)*start)) {
        start++;
    }

    if (*start == '\0') {
        *str = '\0';
        return;
    }

    end = start + strlen(start) - 1;

    while (end > start && isspace((unsigned char)*end)) {
        end--;
    }

    *(end + 1) = '\0';

    if (start != str) {
        memmove(str, start, strlen(start) + 1);
    }
}

void read_string(char *buffer, size_t size) {
    if (fgets(buffer, size, stdin) != NULL) {
        trim_whitespace(buffer);
    }
}