#include<stdio.h>
int isPerfectSquare(int n){
    for (int i = 1; i <= n; i++)
    {
        if (i*i==n)
        {
            return 1;
            break;
        }
        
    }
    return 0;
}
int main() {
    int start, end;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

   printf("\nPerfect Squares in the range [%d - %d]:\n", start, end);
for (int i = start; i <= end; i++) {
    if (isPerfectSquare(i)) {
        printf("%5d ", i);  // Right-aligned with fixed width
    }
}
printf("\n");

    return 0;
}