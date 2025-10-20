#include <stdio.h>
int sumOfSquresOntheven(int n){
    int sum=0;
    for (int i = 0; i <= n; i++)
    {
        if (i%2==0)
        {
            sum+=i*i;
        }
        
    }
    return sum;
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int result=sumOfSquresOntheven(n);
    printf("Sum of squares of even numbers: %d\n", result);


    return 0;
}