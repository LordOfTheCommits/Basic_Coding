#include <stdio.h>

int main()
{
    int i, j;
   printf("enterrrrrrrr size");
   int n;
        char ch='A';

    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == 1 || j == i ){
                printf("%c",ch);
                }
            else
                printf(" ");
        }
        ch++;
        printf("\n");
    }

    return 0;
}