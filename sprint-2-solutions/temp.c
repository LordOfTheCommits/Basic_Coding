#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Early exit if lengths mismatch
    if (len1 != len2) {
        printf("Not anagram\n");
        return 0;
    }

    // Flag array to mark used characters
    int used[1000] = {0};
    int matchCount = 0;

    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (str1[i] == str2[j] && !used[j]) {
                used[j] = 1;
                matchCount++;
                break;
            }
        }
    }

    if (matchCount == len1)
        printf("Anagram\n");
    else
        printf("Not anagram\n");

    return 0;
}