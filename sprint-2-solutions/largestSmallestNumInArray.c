# include<stdio.h>
int largestInarray(int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
 if (arr[i] > largest) {
      largest = arr[i];
        }
    }
    return largest;
}
int smallesAInarray(int arr[],int size){
    int smallest=arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest) {
      smallest = arr[i];
        }
        
    }
    return smallest;
    
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
    
        int minOfarray = smallesAInarray(arr, n);

    int maxOfarray = largestInarray(arr, n);
    printf("largest number in array %d\n Smallest num is %d", maxOfarray,minOfarray);
   
}
