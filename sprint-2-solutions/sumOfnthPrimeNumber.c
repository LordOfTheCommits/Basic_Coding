#include<stdio.h>
int checkPrime(int n){
    
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}
int main(){
        int n,count=0,sum=0;
        printf("enter a  number");
        scanf("%d",&n);
        int i=2;
       while (count<n)
       {
            if (checkPrime(i))
            {
                sum+=i;
                count++;
            }
            i++;

       }
       printf("%d is sum of prime number upto %d terms",sum,n);
       
        
}