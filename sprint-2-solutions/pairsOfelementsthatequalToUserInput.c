#include<stdio.h>
void pairsThatequalToTarget(int arr[],int n,int z){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i]+arr[j]==z)
            {
                printf("%d,%d",arr[i],arr[j]);
            }
            
        }
        printf("\n");
    }
    
}
int main(){
int n,m;
printf("enter a target");
scanf("%d",&m);
printf("enter no of elements");
scanf("%d",&n);
printf("enter a %d elements",n);
int arr[n];
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
pairsThatequalToTarget(arr,n,m);
}