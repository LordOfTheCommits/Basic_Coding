#include <stdio.h>

// Function to calculate the nth triangular number
int nthTriangularnumber(int n)
{
    // Using the direct formula for triangular numbers
    return n * (n + 1) / 2;
}

int main()
{
    int n;

    // Prompt user for input
    printf("Enter which term's triangular number you want: ");
    scanf("%d", &n);

    // Display the result
    printf("The %d-th triangular number is: %d\n", n, nthTriangularnumber(n));

    return 0;
}