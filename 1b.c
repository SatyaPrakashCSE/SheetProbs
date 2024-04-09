#include <stdio.h>

// Function to check if a number is a perfect square
int isPerfectSquare(int n) {
    int sqrt_n = 0;
    while (sqrt_n * sqrt_n <= n) {
        if (sqrt_n * sqrt_n == n)
            return 1; // It's a perfect square
        sqrt_n++;
    }
    return 0; // It's not a perfect square
}

// Function to check if a number is a Fibonacci number
int isFibonacci(int n) {
    // A number is Fibonacci if and only if one or both of (5*n^2 + 4) or (5*n^2 - 4) is a perfect square
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int num;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive number.\n");
    } else if (isFibonacci(num)) {
        printf("%d is a Fibonacci number.\n", num);
    } else {
        printf("%d is not a Fibonacci number.\n", num);
    }

    return 0;
}
