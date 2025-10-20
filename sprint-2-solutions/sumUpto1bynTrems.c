#include <stdio.h>

float sumUpto1byn(int n) {
    float sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;  // Use 1.0 to ensure floating-point division
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the nth term to take sum up to 1/n: ");
    scanf("%d", &n);

    float sum = sumUpto1byn(n);
    printf("Sum is: %f\n", sum);
    return 0;
}