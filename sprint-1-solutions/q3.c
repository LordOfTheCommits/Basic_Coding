#include <stdio.h>
void leapyear( int number){
    
   if ((number%4==0&&number%100!=0)||(number % 400 == 0))
   {
    printf("leap year");
   }
   else{
    printf("not a leap year");
   }
}
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    leapyear(n);

    return 0;
}
