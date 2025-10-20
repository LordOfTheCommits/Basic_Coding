# include<stdio.h>
int calTable(int n);
int main(){
int m;
printf("enter a number");
scanf("%d",&m);
calTable(m);


}
int calTable(int n){
    for (int i = 1; i <=10; i++)
    {
        printf("%d\n",i*n) ;
    }
    
}