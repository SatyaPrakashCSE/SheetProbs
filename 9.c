// WAP to check whether any input positive integer is palindrome or not.

#include <stdio.h>
int main(){
    int num, N, rnum=0, rem;
    printf("Enter the number you want to check : ");
    scanf("%d", &num);
    N = num;
    while (N>0)
    {
        rem = N%10;
        rnum = rnum *10 + rem;
        N = N/10;
    }
    printf("The Reverse of the number %d is %d.\n", num, rnum);
    if (rnum == num)
        printf("The given number is a palindrome.");
    else
        printf("The given number is not a palindrome.");
    return 0;
}