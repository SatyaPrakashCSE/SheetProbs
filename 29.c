#include <stdio.h>

// Function to read a character string using pointer
void readString(char *str) {
    printf("Enter a string: ");
    fgets(str, 100, stdin); // Reading string from standard input
}

// Function to calculate the length of the string without using strlen()
int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Function to print the string in reverse order using pointer
void printReverse(char *str) {
    printf("String in reverse order: ");
    int length = stringLength(str);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", *(str + i));
    }
    printf("\n");
}

int main() {
    char str[100];

    // Reading the string
    readString(str);

    // Printing the length of the string
    printf("Length of the string: %d\n", stringLength(str));

    // Printing the string in reverse order
    printReverse(str);

    return 0;
}
