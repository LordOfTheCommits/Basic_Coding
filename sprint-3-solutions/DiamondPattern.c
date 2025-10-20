#include <stdio.h>

int main() {
    int i, j, k = 0, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

   

    for (i = 1; i <= rows; i++) {
        i <= (rows + 1) / 2 ? k++ : k--;

        for (j = 1; j <= rows; j++) {
            if (j >= (rows + 1) / 2 + 1 - k && j <= (rows + 1) / 2 - 1 + k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
