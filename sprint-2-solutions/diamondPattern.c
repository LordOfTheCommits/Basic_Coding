#include <stdio.h>

int main()
{
    int i, j;

    // Top half (3 lines)
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j >= 4 - i && j <= i + 2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Bottom half (2 lines) - fixed
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j >= i + 1 && j <= 5 - i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
