#include <stdio.h>

int main() {
    int num, isPrime = 1; // Assume the number is prime initially

    // Input
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
                break;
            }
        }

        // Output
        if (isPrime) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }
    // hello 

    return 0;
}
