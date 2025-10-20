#include <stdio.h>

void calculateSumOfSquaresOfDigits() {
    int num, digit, sum = 0;
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;       // Extract the last digit
        sum += digit * digit;   // Add the square of the digit to sum
        num = num / 10;         // Remove the last digit
    }

    printf("Sum of squares of digits: %d\n", sum);
}

int main() {
    printf("Enter an integer\n");
    calculateSumOfSquaresOfDigits();
    
}