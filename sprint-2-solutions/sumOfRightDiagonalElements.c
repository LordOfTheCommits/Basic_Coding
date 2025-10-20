#include <stdio.h>

int sumOfRightDiagonal(int n, int m, int arr[n][m]) {
    int sumOfrightDiagonal = 0;
    int x = 0, k = m - 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == x && j == k) {
                sumOfrightDiagonal += arr[i][j];
                x++;
                k--;
            }
        }
    }

    return sumOfrightDiagonal;
}

int main() {
    int n, m;
    printf("Enter number of rows (n): ");
    scanf("%d", &n);
    printf("Enter number of columns (m): ");
    scanf("%d", &m);

    int arr[n][m];

    printf("\nEnter elements of %dx%d array:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = sumOfRightDiagonal(n, m, arr);
    printf("\n Sum of right diagonal elements is: %d\n", sum);
}