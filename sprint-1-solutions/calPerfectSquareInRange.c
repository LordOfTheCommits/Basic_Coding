#include <stdio.h>
// Returns the square root if perfect square, otherwise 0
int isPerfectSquare(int n)
{
    for (int i = 0; i * i <= n; i++)
    {
        if (i * i == n)
        {
            return i;
            
        }
    }
    return 0; // Not a perfect square
}

int main()
{
    int n, m;

    // Take input
    printf("Enter a start number: ");
    scanf("%d", &n);
    printf("enter a end number");
    scanf("%d", &m);
    // Use the function to check
    for (int i = n; i < m; i++)
    {
        // Display output
        if (isPerfectSquare(i) != 0)
        {
            printf("%d is a perfect square\n", i);
        }
        else
        {
            printf("%d is not a perfect square.\n", i);
        }
    }

    return 0;
}