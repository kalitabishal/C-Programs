#include <stdio.h>

int main() {
    int num, isPrime = 1; // Assume the number is prime initially

    // Input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Validate input
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else {
        // Check divisors from 2 to sqrt(num)
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Set flag to 0 if divisible
                break; // No need to check further
            }
        }

        // Output result
        if (isPrime) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}