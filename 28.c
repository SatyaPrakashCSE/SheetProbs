#include <stdio.h>

void removeChar(char *str, char c) {
    char *readPtr = str;
    char *writePtr = str;

    while (*readPtr) {
        if (*readPtr != c) {
            *writePtr = *readPtr;
            writePtr++;
        }
        readPtr++; 
    }
    *writePtr = '\0';
}

int main() {
    char str[100];
    char c;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to remove: ");
    scanf("%c", &c);

    removeChar(str, c);

    printf("String after removing '%c': %s\n", c, str);

    return 0;
}
