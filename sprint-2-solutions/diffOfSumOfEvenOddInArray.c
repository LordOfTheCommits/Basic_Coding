/* Finding the Difference Between the Sum of Even and Odd Numbers in an Array
 Difficulty: Easy
 Topics: Arrays, Mathematical Computations
 Description: Write a program to calculate the difference between the sum of even and odd numbers in an array.
 Example:
 Input: array = [1, 2, 3, 4, 5, 6]
 Output: 4
 Explanation: The sum of even numbers is 12, and the sum of odd numbers is 8. The difference is 4.*/
#include<stdio.h>
int diffOfsumOfoddEven(int arr[],int n){
    int sumOfOdd=0,sumOfeven=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2!=0)
        {
            sumOfOdd+=arr[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            sumOfeven+=arr[i];
        }
        
    }
    int difference=sumOfeven-sumOfOdd;
    return difference>1?difference:-difference;
    
}
int main(){
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int diff=diffOfsumOfoddEven(arr,n);
        printf("the Difference Between the Sum of Even and Odd Numbers = %d",diff);
    }