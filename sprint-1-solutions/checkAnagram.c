#include <stdio.h>
#include <string.h>
int checkAnagram(char str1[], char str2[])
{
    int arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < strlen(str1); i++)
    {
        char ch = str1[i];
        int idx = ch - 97;
        arr[idx] = arr[idx] + 1;
    }
    for (int i = 0; i < strlen(str2); i++)
    {
        char ch = str2[i];
        int idx = ch - 97;
        arr[idx] = arr[idx] - 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str1[26], str2[126];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (checkAnagram(str1, str2))
    {
        printf("The strings are anagrams");
    }
    else
    {
        printf("The strings are not anagrams");
    }

    return 0;
}