#include <stdio.h>
int primeInrange(int n){
    if (n<=1)
    {
        return 0;
    }
    
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            return 0;
        }
       
    }
    return 1;
}
int lastDigit(int n){
    while (n>10)
    {
        
        n=n/10;
    }
    return n;
    
}
int gcd(int a,int b){
    if (b==0)

    {
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main() {
    int a,ens;
    printf("enterrrrrrrr");
    scanf("%d",&a);
  

       if (primeInrange(a))
       {
               
         printf("%d is prime\n",a);
       }


    
    
  
       return 0;
}