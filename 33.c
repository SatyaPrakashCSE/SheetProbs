#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 10
#define MAX_LENGTH 50

// Function to sort a list of strings into alphabetical order
void sortStrings(char *strings[], int n) {
    int i, j;
    char *temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                // Swap pointers if strings are out of order
                temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
}

// Function to display the sorted list of strings
void displayStrings(char *strings[], int n) {
    printf("Sorted Strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }
}

int main() {
    char *strings[MAX_STRINGS];
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); // Consume newline character left in the input buffer

    if (n > MAX_STRINGS || n <= 0) {
        printf("Invalid number of strings.\n");
        return 1;
    }

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        char input[MAX_LENGTH];
        fgets(input, MAX_LENGTH, stdin);
        input[strcspn(input, "\n")] = '\0'; // Remove newline character
        strings[i] = strdup(input); // Allocate memory and copy the string
    }

    sortStrings(strings, n);
    displayStrings(strings, n);

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(strings[i]);
    }

    return 0;
}
