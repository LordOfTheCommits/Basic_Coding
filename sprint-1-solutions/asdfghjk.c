# include <stdio.h>

int montu(int n,int m){
    int pan=1;
   for (int i = 0; i < m; i++)
   {
        
        pan=pan*n;
         
   }
   return pan ;   
}
int main() {
   printf("%d",montu( 2, 3));
    return 0;
}
