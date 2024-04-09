// WAP to simulate a simple calculator (+,-,/,*,%) that takes two operands and an operator as input and displays the result

#include <stdio.h>
int main(){
    int n1,n2,sum,sub,mul,rem;
    float div;
    int op;
    printf("Enter the numbers : ");
    scanf("%d%d", &n1, &n2);
    printf("Enter the operand : \n1 - addition\n2 - subtraction\n3 - division\n4 - multiplication\n5 - modulo\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        sum = n1 + n2;
        printf("The result is %d", sum);
        break;

    case 2:
        sub = n1 - n2;
        printf("The result is %d", sub);
        break;
    
    case 3:
        div = (n1/n2)* 1.0;
        printf("The result is %f", div);
        break;

    case 4:
        mul = n1 * n2;
        printf("The result is %d", mul);
        break;

    case 5:
        rem = n1 % n2;
        printf("The result is %d", rem);
        break;

    default:
        printf("enter correct values");
        break;
    }
    return 0;
}