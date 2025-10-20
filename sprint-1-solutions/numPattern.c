#include <stdio.h>

int main() {
    int rows, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer loop controls the number of rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop prints numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}