#include <stdio.h>

void miniMaxSum(int arr_count, int* arr) {
 
    for (int i = 0; i < arr_count - 1; i++) {
        for (int j = 0; j < arr_count - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
     for (int i = 0; i < arr_count; i++) {
        printf("%d\t", arr[i]);
    }

    int minSum = 0, maxSum = 0;
    for (int i = 0; i < arr_count - 1; i++) {
        minSum += arr[i];
    }
    for (int i = 1; i < arr_count; i++) {
        maxSum += arr[i];
    }

    // Output the results
     printf("Min Sum = %lld\n", minSum);
    printf("Max Sum = %lld\n", maxSum);
}

int main() {
    int arr_count;
    //printf("Enter size of array: ");
    scanf("%d", &arr_count);

    int  arr[arr_count];
    //printf("Enter %d elements:\n", arr_count);
    for (int i = 0; i < arr_count; i++) {
        scanf("%d", &arr[i]);
    }
    // // for (int i = 0; i < arr_count; i++) {
    //   /  printf("%d\t", arr[i]);
    // }

    
    miniMaxSum(arr_count, arr);

    return 0;
}