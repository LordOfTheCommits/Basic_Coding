#include <stdio.h>

int lcm(int a, int b);
int gcd(int a, int b);

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("LCM of %d and %d = %d\n", num1, num2, lcm(num1, num2));

    return 0;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
        else
    return gcd(b, a % b);

}