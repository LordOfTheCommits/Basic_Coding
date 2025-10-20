#include <stdio.h>

void calFibNum(int n);  

int main() {
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    calFibNum(n);  
    return 0;
}

void calFibNum(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        printf("%d\n", a);
        int c = a + b;
        a = b;
        b = c;
    }
}