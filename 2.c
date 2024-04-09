#include <stdio.h>

double calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1.0;
    }
    double result = 1.0;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

double calculatePower(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

double calculateSine(double x, int terms) {
    double sine = 0.0;
    int sign = 1;
    for (int i = 0; i < terms; ++i) {
        double term = calculatePower(x, 2 * i + 1) / calculateFactorial(2 * i + 1);
        sine += sign * term;
        sign *= -1;
    }
    return sine;
}

int main() {
    double x;
    int terms;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms in the series: ");
    scanf("%d", &terms);

    double sine = calculateSine(x, terms);

    printf("sin(%.2f) = %.6f\n", x, sine);

    return 0;
}
