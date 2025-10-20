# include<stdio.h>
int main(){
    
    
    int n;
    printf("E N T E R\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {       if((j%2==0&&i%2==0)||(j%2!=0&&i%2!=0))
        {
            printf("X");   
        }   
        else
              printf("O");
        }

       
       printf("\n"); 
    }
    
}
