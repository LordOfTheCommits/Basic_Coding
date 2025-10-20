# include<stdio.h>
void divisorOfproduct(int prod){
    for (int i = 1; i < prod; i++)
    {
        if (prod%i==0)
        {
          printf("%d\t",i);
        }
        
    }
    
}
int main(){
int n,m;
printf("enter first number");
scanf("%d",&m);
printf("enter second number");
scanf("%d",&n);
int product=n*m;
divisorOfproduct(product);

}