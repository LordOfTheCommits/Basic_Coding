#include <stdio.h>
#include <string.h>

int isAnagram(char str1[], char str2[])
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
    {
        return 0;
    }

    int totalcount = 0;

    for (int i = 0; i < len1; i++)
    {
        int count = 0;
        for (int j = 0; j < len2; j++)
        {
            if (str1[i] == str2[j])
            {
                str2[j] = '@';
                count++;
                break;
            }
        }
        totalcount += count;
    }

    return (totalcount == len1);
}

int main()
{
    char str1[1000];
    char str2[1000];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (isAnagram(str1, str2))
    {
        printf("Anagram\n");
    }
    else
    {
        printf("Not anagram\n");
    }

    return 0;
}