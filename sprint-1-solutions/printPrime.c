#include <stdio.h>
// Function to check if a number is prime
int isprime(int n)
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
    int s;
    printf("Enter a  number: ");
    scanf("%d", &s);
    
    for (int i = 2; i < s; i++)
    {
        if (isprime(i))
            printf("%d \n", i);
    }

    return 0;
}