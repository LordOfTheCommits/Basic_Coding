#include <stdio.h>
#include <string.h>

void longestSubstring(char str[]) {
    int len = strlen(str);
    int lastIndex[256];
    for (int i = 0; i < 256; i++) lastIndex[i] = -1;

    int start = 0, maxLen = 0, bestStart = 0;

    for (int i = 0; i < len; i++) {
        char ch = str[i];

        if (lastIndex[ch] >= start)
            start = lastIndex[ch] + 1;

        lastIndex[ch] = i;

        int currLen = i - start + 1;
        if (currLen > maxLen) {
            maxLen = currLen;
            bestStart = start;
        }
    }

    printf("Longest substring: ");
    for (int i = bestStart; i < bestStart + maxLen; i++)
        printf("%c", str[i]);
}

int main() {
    char input[1000];
    fgets(input, sizeof(input), stdin);
    longestSubstring(input);
    return 0;
}