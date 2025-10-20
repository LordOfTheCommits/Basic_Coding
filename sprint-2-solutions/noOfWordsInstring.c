#include <stdio.h>
#include <string.h>

int main() {
    char ch[1000];
    printf("Enter a sentence: ");
    fgets(ch, sizeof(ch), stdin);  

    int count = 1;

    for (int i = 0; ch[i] != '\0'; i++) {
        
        if (ch[i] == ' ' ) {
           count++;
    }

    }
    
    printf("Number of word in string : %d\n", count);
    return 0;
}