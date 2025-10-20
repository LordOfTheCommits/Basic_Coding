#include <stdio.h>

int main()
{
    int start, end, sum = 0;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    printf("Sum of even numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}