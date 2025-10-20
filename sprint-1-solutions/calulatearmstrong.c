#include <stdio.h>

int main() {
    int num,n,sum=0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    n=num;

    while(num>0){
        
         int r=num%10;
         num=num/10;
        
        sum=sum+r*r*r;
    }


    //printf("sum= %d n= %d",sum,n);
        if (n==sum){
        printf("%d is armstrong number ",n);
        }
        else{
            printf("%d is not armstrong number ",n);
        }

    return 0;
}
