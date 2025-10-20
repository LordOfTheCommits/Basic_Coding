#include <stdio.h>
void largestElementsInrow(int n, int m, int arr[n][m]){
    printf("[");
    for (int i = 0; i < n; i++)
    {   
        int max=arr[i][0];
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j]>max)
            {
               max=arr[i][j];
            }
            
        }
        printf("(%d)",max);
    }
    printf("]\n");

}
int main() {
    int n, m;
    printf("Enter number of rows (n): ");
    scanf("%d", &n);
    printf("Enter number of columns (m): ");
    scanf("%d", &m);

    int arr[n][m];  // Variable Length Array (VLA)

    // Input elements
    printf("Enter elements of %dX%d array:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    largestElementsInrow(n,m,arr);
    return 0;
}