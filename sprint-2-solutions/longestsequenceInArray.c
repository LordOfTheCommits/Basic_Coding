#include<stdio.h>
void consecutivesterms(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
            }
        }
       
    }
    printf("the consecutive terms  is [");
   for (int k = 0; k < n-1; k++)
   {
    if (arr[k+1]-arr[k]!=1)
    {
         printf("%d\t ", arr[k]);
        break;
    }
   else{ printf("\t%d\t",arr[k]);
      }
   }
   printf("]");
    
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
    consecutivesterms(arr,n);
}