#include <stdio.h>

int gcdOfMultipleNum(int arr[], int size);
int minOfArray(int arr[], int size);

int main() {
    int n;
    printf("Enter the size of the array ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = gcdOfMultipleNum(arr, n);
    printf("GCD of the array elements is %d\n", result);

    return 0;
}

int minOfArray(int arr[], int size) {
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int gcdOfMultipleNum(int arr[], int size) {
    int min = minOfArray(arr, size);

    for (int i = min; i >= 1; i--) {
        int flag = 1;
        for (int j = 0; j < size; j++) {
            if (arr[j] % i != 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            return i;
        }
    }

    return 1; 
}