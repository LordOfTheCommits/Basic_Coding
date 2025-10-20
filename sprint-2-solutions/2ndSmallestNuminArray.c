# include <stdio.h>
int SmallNum(int arr[],int size){
    int smallest=999999999;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<smallest)
        {
            smallest=arr[i];
        }
        
    }
    int secondSmallest=999999999;          
    for (int i = 0; i < size; i++)
    {


        if (arr[i]<secondSmallest&&arr[i]!=smallest)
        {
           secondSmallest=arr[i];
        }
        
    }
    return secondSmallest;
    

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
    int result=SmallNum(arr,n);
    printf("Second smallest number in array is %d\n", result);
}