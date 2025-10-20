#include <stdio.h>
void subsetsOfArray(int arr[], int n)
{  
    printf("Subsets Of a set are:-[ ]");
    printf("[");
    for (int i = 0; i < n ; i++)
    {
        printf("%d", arr[i]);
    }
    printf("]");
    for (int i = 0; i < n ; i++)
    {
        printf("[%d]", arr[i]);
        
        for (int j = i; j < n; j++)
        {

            if (arr[i] != arr[j])
            {
                printf("[%d,%d]", arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    subsetsOfArray(arr, n);
}