#include<stdio.h>
int main(){
    int n=6;
    char ch='A';
for (int i = 1; i <= n/2+1; i++) {
        for (int j = 1; j <= n; j++) {
            if (j >= n/2 - i+2 && j <= n/2 + i){
                printf("%c",ch);
                ch++;
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
