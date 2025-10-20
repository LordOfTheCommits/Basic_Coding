#include <stdio.h>
int fact(int n);
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Factorial of %d = %d\n", number, fact(number));

    return 0;
}
int fact(int n){
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}