# include<stdio.h>
int sumOfnthoddNum(int n){
    int sum=0;
    printf("sum of odd terms \t");
    for (int i = 0; i <= 2*n-1; i++)
    {
        
      if (i%2!=0)
      {
          sum+=i; 
          printf("%d\t",i);
      }
       
    }
    return sum;
}
int main(){
    int a;
    printf("enter nth number");
    scanf("%d",&a);
   int sum=sumOfnthoddNum(a);
   printf("\nsum till %d term = %d",a,sum);

}