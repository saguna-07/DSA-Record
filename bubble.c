#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 5};
    int n = 5, i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

