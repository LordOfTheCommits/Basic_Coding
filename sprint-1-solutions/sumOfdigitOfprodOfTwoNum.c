#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int number1, number2;
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    int product = number1 * number2;
    int digitSum = sumOfDigits(product);

    printf("Product: %d\n", product);
    printf("Sum of digits: %d\n", digitSum);

    return 0;
}