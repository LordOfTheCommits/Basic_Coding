#include <stdio.h>

void checkPerfectNumber(int n);

int main() {
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n > 0) {
        checkPerfectNumber(n);
    }

    return 0;
}

void checkPerfectNumber(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        printf("%d is a perfect number\n", n);
    }
    else{
        printf("%d is a not perfect number\n",n);
    }
}
