#include <stdio.h>

int missingNumber(int arr[], int size) {
    int total = (size + 1) * (size + 2) / 2;  // What total should be
    for (int i = 0; i < size; i++) {
        total -= arr[i];  // Remove what we actually have
    }
    return total;  // The leftover is the missing one
}

int main() {
    int n;
    printf("Enter number of elements (n-1): ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d numbers (from 1 to n, one missing):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = missingNumber(arr, n);
    printf("Missing number is: %d\n", result);

    return 0;
}