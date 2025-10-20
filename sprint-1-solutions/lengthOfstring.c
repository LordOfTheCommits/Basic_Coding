#include <stdio.h>

int main() {
    char str[100]; // You can adjust size based on expected input
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str); // Reads input string until whitespace

    // Loop through each character until null terminator
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}