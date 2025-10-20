#include <stdio.h>

int main() {
    int num = 1; // Starting number
    for (int i = 1; i <= 4; i++) { // 4 rows
        for (int j = 1; j <= i; j++) { // i numbers in each row
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}