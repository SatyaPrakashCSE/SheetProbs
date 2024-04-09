#include <stdio.h>

int sumOfEvens(int N) {
    // Base case: if N is 1, return 2
    if (N == 1)
        return 2;
    // Recursive case: add 2N and call the function with N-1
    else
        return 2 * N + sumOfEvens(N - 1);
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N must be a positive integer.\n");
        return 1;
    }

    int result = sumOfEvens(N);
    printf("Sum of even numbers up to 2*%d = %d\n", N, result);

    return 0;
}
