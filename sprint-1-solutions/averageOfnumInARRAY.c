#include <stdio.h>
int averageOfArray(int arr[], int n) {
    int sum = 0 , avg=0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
         
    }
    return sum/n;
}
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int averageResult = averageOfArray(arr, n);
    printf("average of array elements: %d\n", averageResult);

    return 0;
}