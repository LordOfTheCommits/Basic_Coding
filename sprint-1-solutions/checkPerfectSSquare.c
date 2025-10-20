#include <stdio.h>

// Returns the square root if perfect square, otherwise 0
int isPerfectSquare(int n) {
    for (int i = 0; i * i <= n; i++) {
        if (i * i == n) {
            return i;
        }
    }
    return 0; // Not a perfect square
}

int main() {
    int n;

    // Take input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Use the function to check
    int sqrt = isPerfectSquare(n);

    // Display output
    if (sqrt != 0) {
        printf("%d is a perfect square. Square root is %d\n", n, sqrt);
    } else {
        printf("%d is not a perfect square.\n", n);
    }

    return 0;
}