#include <stdio.h>

int countOfSpecificDigit(int num, int digit) {
    int lastdigit, count = 0;
    
    while (num > 0) {
        lastdigit = num % 10;
        if (lastdigit == digit) {
            count++;
        }
        num = num / 10;
    }

    return count;
}

int main() {
    int num, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter the digit to count: ");
    scanf("%d", &digit);

    int result = countOfSpecificDigit(num, digit);
    printf("The digit %d appears %d time\n\n", digit, result);

    return 0;
}

