#include <stdio.h>

int main() {

    int n;
        printf("eenteeeerrrrr odd input");

    scanf("%d",&n);
    for (int i = 1; i <= n/2+1; i++) {
        int k=i;
        for (int j = 1; j <= n; j++) {
            if (j >= n/2 - i+2 && j <= n/2 + i){
                
                printf("%d",k);
                j < n / 2 + 1 ? k++ : k--;

            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}