//WAP to implement linear search using arrays

#include <stdio.h>
#define N 10

int main(){
    int arr[N], i, a = 0, key;
    for ( i = 0; i < N; i++)
    {
        printf("Enter the element %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the key element to search in the array : ");
    scanf("%d", &key);

    for (a = 0; a < N; a++)
    {
        if (arr[a] == key){
            printf("The element is found in the array and is at the position %d", a);
            break;
        }
    }
    if (a>=N)
        printf("The element was not found in the array");
    return 0;
}