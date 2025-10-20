#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int checkPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;  // Not a palindrome
        }
    }
    return 1;  // Is a palindrome
}

int main() {
    char string[100];

    printf("Enter a string: ");
    scanf("%s", string);  // Read string from user

    if (checkPalindrome(string)) {
        printf("The string is a palindrome\n");
    } else {
        printf("The string is not a palindrome\n");
    }

    return 0;
}
