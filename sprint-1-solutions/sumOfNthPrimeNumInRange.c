#include<stdio.h>

// Function to check if a number is prime
int prime(int n)
{
    if (n <= 1) // 0 and 1 are not prime numbers
        return 0;

    // Loop through numbers from 2 to n-1 to check for factors
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) // If divisible, it's not a prime
            return 0;
    }
    return 1; // No divisors found, so it's prime
}

// Function to store the first 'n' prime numbers in an array
// and return their total sum
int allPrime(int arr[], int n) {
    int k = 0; // Index for storing prime numbers

    // Start checking numbers from 2 onward
    for (int num = 2; k < n; num++) {
        int isprime = prime(num); // Determine if current number is prime
        if (isprime == 1) {
            arr[k] = num; // Store the prime number in the array
            k++;          // Increment index to store next prime
        }
    }

    // Calculate the sum of all stored prime numbers
    int s = 0;
    for (int j = 0; j < n; j++) {
        printf("%d",arr[j]);
        s += arr[j];
    }

    return s; // Return the computed sum
}

int main() {
    int n; // Number of prime numbers to generate
    int arr[1000]; // Array to hold the prime numbers

    // Ask user for input
    printf("Enter a Number: ");
    scanf("%d", &n);

    // Show the result with the sum of the first 'n' prime numbers
    printf("Sum of %d prime numbers = %d\n", n, allPrime(arr, n));

    return 0; // End of program
}