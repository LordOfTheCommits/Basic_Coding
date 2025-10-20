#include <stdio.h>

void allDivisorOfNum(int n);

int main() {
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n > 0) {
        allDivisorOfNum(n);
    }

    return 0;
}

void allDivisorOfNum(int n) {
    printf("The divisor of num is ");

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
           printf(" %d\n                      ",i);
        }
    }

    
}
