#include <stdio.h>
int isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}
    


int main() {
    int start, end;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Palindromes in the range %d to %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}