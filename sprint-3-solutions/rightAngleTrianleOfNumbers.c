# include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int m=1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (j<=i)
            {
                printf("%d",m);
                m++;
            }
            else
            {
                printf(" ");

            }
            
        }
       printf("\n"); 
    }
    
}