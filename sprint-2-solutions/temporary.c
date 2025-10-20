
#include<stdio.h>
void pairsThatequalToTarget(int arr[],int n,int m){
     int temp[3];
     
    
    for (int i = 0; i < n-2; i++)
    {
        for (int j = i; j < n-1; j++)
        {
            for (int k = j; k < n; k++)
            {
                if (arr[i]+arr[j]+arr[k]==m)
                {   if (arr[i]!=temp[0]&&arr[j]!=temp[1]&&arr[k]!=temp[2])
                {
                    printf("[%d,%d,%d]\n",arr[i],arr[j],arr[k]);
                    
                    
                }
                
                    
                   
                    temp[0]=arr[i];
                    temp[1]=arr[j];
                    temp[2]=arr[k];
                }
                
            }
            
        }
        
        
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