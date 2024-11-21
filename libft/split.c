#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to check if a character is the delimiter
int is_separator(char c, char delimiter) {
    return c == delimiter;
}

// Function to count substrings separated by the delimiter
int count_substrings(char *str, char delimiter) {
    int count = 0;
    int in_substring = 0;

    while (*str) {
        if (is_separator(*str, delimiter)) {
            in_substring = 0;
        } else {
            if (in_substring == 0) {
                count++;
                in_substring = 1;
            }
        }
        str++;
    }
    return count;
}

// Function to copy a substring
char *copy_substring(char *start, char *end) {
    size_t length = end - start;
    char *substring = (char *)malloc(length + 1);
    if (substring == NULL) {
        return NULL;
    }
    strncpy(substring, start, length);
    substring[length] = '\0';
    return substring;
}

// Function to split a string by a single delimiter
char **split(char *str, char delimiter) {
    if (str == NULL) {
        return NULL;
    }

    int substr_count = count_substrings(str, delimiter);
    char **result = (char **)malloc((substr_count + 1) * sizeof(char *));
    if (result == NULL) {
        return NULL;
    }

    int index = 0;
    char *start = NULL;
    while (*str) {
        if (is_separator(*str, delimiter)) {
            if (start != NULL) {
                result[index++] = copy_substring(start, str);
                start = NULL;
            }
        } else {
            if (start == NULL) {
                start = str;
            }
        }
        str++;
    }
    if (start != NULL) {
        result[index++] = copy_substring(start, str);
    }
    result[index] = NULL;

    return result;
}

int main() {
    char str[] = "Hello world!. How are you?";
    char delimiter = '.';
    char **result = split(str, delimiter);

    if (result != NULL) {
        for (int i = 0; result[i] != NULL; i++) {
            printf("Substring %d: %s\n", i, result[i]);
            free(result[i]); // Free each allocated substring
        }
        free(result); // Free the array of pointers
    } else {
        printf("Memory allocation failed or invalid input\n");
    }

    return 0;
}

