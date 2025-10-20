# include<stdio.h>
int sumOfdiagonalElemnts(int n, int m, int arr[n][m]){

    int sum=0;
    for (int i = 0; i < n; i++)
    {   
        
        for (int j = 0; j < m; j++)
        {
            if (i==j)
            {
               sum+=arr[i][j];
            }
            
        }
        
    }
   return sum;

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
    int sum=sumOfdiagonalElemnts(n,m,arr);
    printf("sum of diagonal elements is :%d",sum);
}