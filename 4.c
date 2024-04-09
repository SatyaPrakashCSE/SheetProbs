// WAP to find whether a given year is a leap year or not. Modify it to generate a list of leap years between two year limits given by user.

#include <stdio.h>
int checkLeap(int year){
        if (year % 100 == 0)
    {
        if (year % 400 == 0)
            return 1;
        else
            return 0;
    }
    else
    {
        if (year % 4 == 0 )
            return 1;
        else
            return 0;
    }
}

int main(){
    int year, input1, input2, result, i, a;
    printf("Enter the year you want to check : ");
    scanf("%d", &year);
    result = checkLeap(year);
    if (result == 1)
        printf("The year %d is a leap year.\n", year);
    else
        printf("The year %d is not a leap year.\n", year);

    printf("Enter the two years between which you want to find leap years : ");
    scanf("%d%d", &input1, &input2);
    for (i = input1; i < input1+4; i++){
        if (checkLeap(i) == 1){
            a = i;
            goto P;
        }
    }
    P : for ( i = a ; i <= input2; i=i+4)
    {
        printf(",%d", i);
    }
    
    return 0;
}