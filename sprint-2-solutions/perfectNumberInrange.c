//question11
#include<stdio.h>
int isPerfectnumber(int n){
    int sum=0;
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum+=i;
           
        }
        
    }
    if (sum==n)
    {
         return 1;
            
    }
    
    return 0;
}
int main() {
    int start, end;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

   printf("\nPerfect number in the range [%d - %d]:\n", start, end);
for (int i = start; i <= end; i++) {
    if (isPerfectnumber(i)) {
        printf("%5d ", i);  // Right-aligned with fixed width
    }
}
printf("\n");

    return 0;
}