// Wap to find the GCD of two inputs positive integer number.

#include <stdio.h>
int GCD(int n1, int n2){
    if (n1%n2 == 0)
        return n2;
    else
        return GCD(n2,n1%n2);
}

int main(){
    int a1, a2 ,g;
    printf("Enter the greater number : ");
    scanf("%d", &a1);
    printf("Enter the smaller number : ");
    scanf("%d", &a2);
    g = GCD(a1,a2);
    printf("The greatest common divisor of %d and %d is %d", a1, a2, g);
    return 0;
}