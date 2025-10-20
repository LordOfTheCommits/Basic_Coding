#include <stdio.h>
void commonElements (int arr1[],int n,int arr2[],int m){
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
        if (arr1[i]==arr2[j])
        {
            printf("common=%d\n",arr1[i]);
        }
        
       }
       
    }
    
}

    int main() {
    int n, m;

    // First array input
    printf("Enter size of first array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter %d elements for first array:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Second array input
    printf("Enter size of second array: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter %d elements for second array:\n", m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

commonElements(arr1,n,arr2,m);

    return 0;
}