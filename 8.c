// WAP to read a number n, and print it out digit-by-digit, as a series of words. For e.g. 123 would be printed as one two three.

#include <stdio.h>

int main(){
    int num, rnum=0, rem, N, i, R;
    printf("Enter the number you want to print digit-by-digit : ");
    scanf("%d", &num);
    N = num;
    while (N > 0){
        rem = N%10;
        rnum = rnum * 10 + rem;
        N = N/10;
    }
    R = rnum;
    while (R > 0){
        i = R%10;
        R = R/10;
        switch (i)
        {
        case 0:
            printf("Zero ");
            break;

        case 1:
            printf("One ");
            break;
        
        case 2:
            printf("Two ");
            break;

        case 3:
            printf("Three ");
            break;
        
        case 4:
            printf("Four ");
            break;

        case 5:
            printf("Five ");
            break;

        case 6:
            printf("Six ");
            break;
        
        case 7:
            printf("Seven ");
            break;

        case 8:
            printf("Eight ");
            break;

        case 9:
            printf("Nine ");
            break;

        default: printf("Error.");
            break;
        }
    }
}