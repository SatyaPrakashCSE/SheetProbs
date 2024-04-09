// WAP to swap the values of two variable without using a third variable.

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the value of first variable : ");
    scanf("%d", &a);
    printf("Enter the value of second variable : ");
    scanf("%d", &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The value of first variable is %d and the value of second variable is %d.", a, b);
    return 0;
}