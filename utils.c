#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to validate if a string is a valid date format (YYYY-MM-DD)
int is_valid_date(const char *date) {
    int year, month, day;
    if (sscanf(date, "%d-%d-%d", &year, &month, &day) != 3) {
        return 0; // Invalid format
    }
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        return 0; // Invalid month or day
    }
    // Additional checks for month-specific days can be added here
    return 1; // Valid date
}

// Function to trim whitespace from a string
void trim_whitespace(char *str) {
    char *end;

    // Trim leading space
    while (isspace((unsigned char)*str)) str++;

    // Trim trailing space
    end = str + strlen(str) - 1;
    while (end > str && isspace((unsigned char)*end)) end--;

    // Null terminate after the last non-space character
    *(end + 1) = '\0';
}

// Function to read a string from user input with a maximum length
void read_string(char *buffer, size_t size) {
    if (fgets(buffer, size, stdin) != NULL) {
        trim_whitespace(buffer);
    }
}