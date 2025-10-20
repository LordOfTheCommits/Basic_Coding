#include <stdio.h>
#include <string.h>
int checkPalindrome(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}
void printSubstring(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            int size = j - i + 1;
            int x = 0;
            char temp[size + 1];
            // printf("size = %d\t", size);
            for (int k = i; k <= j; k++)
            {
                temp[x] = str[k];
                // printf("k = %d\t", k);
                x++;
            }
            temp[x] = '\0';
            // printf("%s\n", temp);
            if (checkPalindrome(temp))
            {
                puts(temp);
            }
        }
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printSubstring(str);
}