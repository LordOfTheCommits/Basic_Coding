#include <stdio.h>
int countSpecificDigits(int num, int m)
{
    int count = 0;
    while (num > 0)
    {
        int digit = num % 10;
        if (digit > m)
        {
            count++;
        }
        num = num / 10;
    }
    return count;
}
int main()
{
    int number, value;
    printf("enter a number");
    scanf("%d", &number);
    printf("enter a digit to count");
    scanf("%d", &value);
    int result = countSpecificDigits(number, value);
    printf("%d digits is greater than %d in a number.", result, value);
}