#include <stdio.h>
int countNumberOfDigit();
int main()
{

    printf("Enter an integer: \n");
    countNumberOfDigit();

    return 0;
}

int countNumberOfDigit()
{
    int num;
    scanf("%d", &num);
    int count = 0;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }

    printf("Number of digits: %d\n", count);
}