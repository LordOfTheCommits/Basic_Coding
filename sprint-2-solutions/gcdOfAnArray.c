#include<stdio.h>
int calGcdOfAnArray(int arr[],int size){
   int smallest=arr[0],ans=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest) {
      smallest = arr[i];
        }
        
    }
    for (int i = smallest; i >= 1; i--)
    {   int flag=1;
        for (int j = 0; j < size; j++)
        {
            if (arr[j]%i!=0)
            {
                flag=0;
                break;
            }

        }
        if(flag==1){
            ans=i;
            break;
        }
        
    }
    return ans;
    

}
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result=calGcdOfAnArray(arr,n);
     printf("gcd = %d ", result);
    
}