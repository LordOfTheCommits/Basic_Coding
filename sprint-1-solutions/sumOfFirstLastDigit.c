#include <stdio.h>

int main() {
    int n,lastDigit=-1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n>10){
         int r=n%10;
         n=n/10;
          if(lastDigit==-1){
            lastDigit=r;
           
          }
    }
    printf("%d",lastDigit+n);
    return 0;
}
