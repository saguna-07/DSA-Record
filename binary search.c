#include <stdio.h>

// Returns index of key in arr[left..right], or -1 if not found
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main(void) {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 23;

    int result = binarySearch(arr, 0, size - 1, key);
    if (result == -1) {
        printf("Element %d is not present in array\n", key);
    } else {
        printf("Element %d is present at index %d\n", key, result);
    }
    return 0;
}

