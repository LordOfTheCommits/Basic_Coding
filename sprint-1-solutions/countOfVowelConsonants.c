#include <stdio.h>
#include <string.h>
//written by you
// void analyzeString(char str[], int *vowels, int *consonants) {
//     *vowels = 0;
//     *consonants = 0;

//     int length = strlen(str);
//     for (int i = 0; i < length; i++) {
//         char ch = str[i];

//         // Check for vowels (both uppercase and lowercase)
//         if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') ||
//             (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')) {
//             (*vowels)++;
//         }
//         // Check for consonants: only alphabets that are not vowels
//         else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
//             (*consonants)++;
//         }
//     }
// }

int countVowelString(char str[]) {
    int vowelsCount = 0;

    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        char ch = str[i];

        // Check for vowels (both uppercase and lowercase)
        if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') ||
            (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')) {
            vowelsCount++;
        }
    }
    return vowelsCount;
}
int countConsonantString(char str[]) {
    int consonanatCount = 0;

    int length = strlen(str);
    for (int i = 0; i < length-1; i++) {
        char ch = str[i];

        // Check for vowels (both uppercase and lowercase)
        if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') ||
            (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')) {
            
        }else{
            consonanatCount++;
        }
    }
    return consonanatCount;
}

int main() {
    char inputchar[100];

    printf("Enter a string: ");
    fgets(inputchar, sizeof(inputchar), stdin);

    //analyzeString(string, &vowelCount, &consonantCount);

    printf("Consonants : %d\n", countConsonantString(inputchar));
    printf("Vowels : %d\n", countVowelString(inputchar));

    return 0;
}