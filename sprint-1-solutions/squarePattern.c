#include <stdio.h>

int main() {
    int size, num = 1;

    printf("Enter matrix size: ");
    scanf("%d", &size);

    // Loop through rows
    for (int i = 0; i < size; i++) {
        // Loop through columns
        for (int j = 0; j < size; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n"); // Move to next row
    }

    return 0;
}