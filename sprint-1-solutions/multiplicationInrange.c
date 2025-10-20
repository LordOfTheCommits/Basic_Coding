#include <stdio.h>

void PrintTable(int n){
    printf("Table of %d:\n", n);
    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\t", n, i, n * i);
    }
    printf("\n"); // Adds space between tables
}

int main(){
    int a, b;
    printf("Enter starting number: ");
    scanf("%d", &a);
    printf("Enter ending number: ");
    scanf("%d", &b);

    for (int i = a; i <= b; i++){
        PrintTable(i);
    }

    return 0;
}