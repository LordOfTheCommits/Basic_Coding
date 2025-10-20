#include <stdio.h>

// Function to check if a number is prime
int prime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int m;
    printf("Enter a number: ");
    scanf("%d", &m);

    if (prime(m))
        printf("prime\n");
    else
        printf("not prime\n");

    return 0;
}