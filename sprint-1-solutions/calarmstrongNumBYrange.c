#include <stdio.h>

// Function to check if a number is Armstrong
int isArmstrong(int num) {
    int original = num;
    int sum = 0;

    while (num > 0) {
        int r = num % 10;
        num /= 10;
        sum += r * r * r;
    }

    return (original == sum);
}

int main() {
    int startNum, endNum;
    printf("Enter a start number: ");
    scanf("%d", &startNum);
    printf("Enter a ending number: ");
    scanf("%d", &endNum);
    for (int i = startNum; i < endNum; i++)
    {
        if (isArmstrong(i)){
            printf("%d \n", i);
        } 
    }

    return 0;
}