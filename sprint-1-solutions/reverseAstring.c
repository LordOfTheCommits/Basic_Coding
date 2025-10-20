#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int len = strlen(str);
    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    char string[100];

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);  // Accepts spaces too

    

    reverseString(string);

    return 0;
}