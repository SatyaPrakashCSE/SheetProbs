#include <stdio.h>

void processLine(char *line) {
    while (*line != '\0') {
        if ((*line >= 'A' && *line <= 'Z') || (*line >= 'a' && *line <= 'z')) {
            // Reversing the case of alphabetic characters
            if (*line >= 'A' && *line <= 'Z')
                *line = *line + 32; // Convert uppercase to lowercase
            else
                *line = *line - 32; // Convert lowercase to uppercase
        } else if (*line >= '0' && *line <= '9') {
            // Replace digits with '0'
            *line = '0';
        } else {
            // Replace other characters with '*'
            *line = '*';
        }
        line++; // Move to the next character
    }
}

int main() {
    char line[100];

    printf("Enter a line of mixed text: ");
    fgets(line, sizeof(line), stdin);

    processLine(line);

    printf("Processed line: %s\n", line);

    return 0;
}
