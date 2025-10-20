#include <stdio.h>

void maximumprimeFactors(int n) {
    int max=-2147483648;
    for (int i = 2; i <= n; i++)
        while (n % i == 0) {
            if (max<i)
            {
                max=i;
            }
            
            n /= i;
        }
       

if (max == -2147483648)
    printf("No prime factors found.\n");
else
    printf("The largest prime factor is: %d\n", max);
}

int main() {
    int n;
    printf(" Input a positive integer (greater than 1) to compute its largest prime factor: ");
    scanf("%d", &n);
    maximumprimeFactors(n);
    return 0;
}