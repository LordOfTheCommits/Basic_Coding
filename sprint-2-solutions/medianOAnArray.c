#include <stdio.h>
void medianOfarray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    
        if (n%2!=0)
        {
            printf("\n The median of the array is: %d",arr[n/2]);
        }
        else{
            float median = (arr[n/2 - 1] + arr[n/2]) / 2.0;
            printf("\n The median of the array is: %.2f\n", median);
        }
    
    
}
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    medianOfarray(arr,n);
}