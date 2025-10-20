#include <stdio.h>

void sortArray(int arr[], int size) {
    // Bubble sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void findMedian(int arr[], int size) {
    sortArray(arr, size); // Ensure array is sorted

    if (size % 2 == 0) {
        int mid1 = arr[size / 2];
        int mid2 = arr[(size / 2) - 1];
        printf("Median is: %.2f\n", (mid1 + mid2) / 2.0);
    } else {
        printf("Median is: %d\n", arr[size / 2]);
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findMedian(arr, n);

    return 0;
}