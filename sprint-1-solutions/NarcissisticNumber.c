#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a number
int countNumberOfDigit(int num)
{
    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}

// Function to check if a number is Narcissistic
int isNarcissisticNum(int num, int noOfDigit)
{
    int sum = 0;
    int originalNum = num;

    while (num != 0)
    {
        int lastDigit = num % 10;
        num = num / 10;
        sum += pow(lastDigit, noOfDigit);
    }

    return sum == originalNum;
}

int main()
{
    int n = 153;
    int noOfDigitInGivenNumber = countNumberOfDigit(n);

    int result = isNarcissisticNum(n, noOfDigitInGivenNumber);

    if (result == 1)
    {
        printf("It is a Narcissistic number: %d\n", n);
    }
    else
    {
        printf("It is not a Narcissistic number: %d\n", n);
    }

    return 0;
}