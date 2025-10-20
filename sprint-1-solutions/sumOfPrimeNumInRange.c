#include <stdio.h>

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
    int startNum, endNum,sum=0;
    printf("Enter a start number: ");
    scanf("%d", &startNum);
    printf("Enter a ending number: ");
    scanf("%d", &endNum);
    for (int i = startNum; i < endNum; i++)
    {
        if(isprime(i)){
            
        sum=sum+i;
        }
    }   
    printf("%d",sum);

    return 0;
}