#include <stdio.h>

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = 5, i, j, min, temp;

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }

        // Swap arr[i] and arr[min]
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // Print sorted array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

