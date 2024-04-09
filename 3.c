//WAP to generate every 3rd integer beginning with i = 2 and continue for all integers that are less than 150. Calculate the sum of those integers that are evenly divisible by 5.

#include <stdio.h>

int main(){
    int i = 2, sum = 0;
    while (i<150)
    {
        printf(",%d ", i);
        if (i%5 == 0 && (i/5)%2 == 0)
        {
            sum = sum+i;
        }
        i = i+3;
    }
    printf("The sum of those integers that are evenly divisible by 5 is %d", sum);
    return 0;
}