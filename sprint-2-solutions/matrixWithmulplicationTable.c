#include <stdio.h>

int main()
{
    int i, j;
   printf("enterrrrrrrr size");
   int n;
        

    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
          
                printf("%d",j*i);
           
        }
        printf("\n");
    }

    return 0;
}