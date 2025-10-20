#include <stdio.h>
int isArmstrong(int num);
int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (isArmstrong(n))
    {
        printf("%d is an Armstrong number.", n);
    }
    else
    {
        printf("%d is not an Armstrong number.", n);
    }

    return 0;
}
int isArmstrong(int num)
{
    int temp = num;
    int digit, sumOfCubes = 0;

    while (temp > 0)
    {
        digit = temp % 10;
        temp = temp / 10;

        sumOfCubes += digit * digit * digit;
    }

    if (num == sumOfCubes)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}