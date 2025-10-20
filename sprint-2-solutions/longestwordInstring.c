#include <stdio.h>
#include <string.h>

int main() {
    char ch[1000];
    printf("Enter a sentence: ");
    fgets(ch, sizeof(ch), stdin);  // Reads full line including spaces

    int maxcount = 0, count = 0;

    for (int i = 0; ch[i] != '\0'; i++) {
        // Inverted logic: check for space or newline first
        if (ch[i] == ' ' || ch[i] == '\n') {
            if (count > maxcount) {
                maxcount = count;
            }
            count = 0;  // Reset count for next word
        } else {
            count++;  // Count characters in current word
        }
    }


    if (count > maxcount) {
        maxcount = count;
    }

    printf("Length of longest word: %d\n", maxcount);
    return 0;
}