#include <stdio.h>

int main() {
    int n1, n2, n3, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
    printf("The greatest number among %d, %d, and %d is : %d\n", n1, n2, n3, max);
    return 0;
}
