/*Finding All Triplets in an Array That Sum to Zero
Difficulty: Medium
Topics: Arrays, Sorting
Description: Write a program to find all unique triplets in an array that sum to zero.
Example:
Input: array = [-1, 0, 1, 2, -1, -4]
Output: [[-1, -1, 2], [-1, 0, 1]]
Explanation: The unique triplets that sum to zero are listed.*/
#include <stdio.h>

void findTriplets(int arr[], int n) {
    printf("Triplets that sum to zero:\n");

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    printf("[%d, %d, %d]\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
}

int main() {
    int array[] = {-1, 0, 1, 2, -1, -4};
    int size = sizeof(array) / sizeof(array[0]);

    findTriplets(array, size);
    return 0;
}