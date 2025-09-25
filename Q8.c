#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input: Ask user for the value of n
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Validating the input
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    // Calculating the sum using loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Output 
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}