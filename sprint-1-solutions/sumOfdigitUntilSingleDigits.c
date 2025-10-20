#include <stdio.h>
int sumOfDigit(int n){
    int result = 0;
    while(n>0){
        
         int r=n%10;
         n=n/10;

        result += r;
    }
    return result; 
}
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);
    int ans=-1;
    while(1){

        int result=sumOfDigit(number);
        if(result/10==0){
            ans=result;
            break;
        }
        number=result;

    }
    printf("Sum of digits of until zero = %d  ", ans);

    return 0;
}
