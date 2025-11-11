#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int n = 5;
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert the key at after the element just smaller than it.
        arr[j + 1] = key;
    }

    // Print sorted array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}





















