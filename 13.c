// WAP to find the number of elements in an array

#include <stdio.h>

int main(){
    char str[10] = "abcdefgh";
    int len = 0, i;
    for (i = 0; str[i] != 0; i++){
        len = len +1;
    }
    printf("The length of the string provided is %d.", len);
    return 0;
}