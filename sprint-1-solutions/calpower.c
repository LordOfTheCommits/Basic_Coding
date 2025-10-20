# include<stdio.h>
int calPower(int n,int m){
    int power=1;
while (m!=0)
{
    power=power*n;
    m--;
}
return power;


}
int main(){
int n,m;
printf("enter a base");
scanf("%d",&n);
printf("enter a exponent");
scanf("%d",&m);

int result=calPower(n,m);
printf("power of %d to the power %d is %d\n",n,m,result);


}