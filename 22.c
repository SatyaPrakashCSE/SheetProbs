#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            return binarySearch(arr, mid + 1, right, key);
        else
            return binarySearch(arr, left, mid - 1, key);
    }
    return -1; // Key not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int index = binarySearch(arr, 0, n - 1, key);

    if (index != -1)
        printf("Element found at index %d.\n", index);
    else
        printf("Element not found.\n");

    return 0;
}
