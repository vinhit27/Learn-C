#include <stdio.h>
#include <math.h>
int main() {
    int n, reversed = 0;

    // Input a positive number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if number is positive
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Reverse logic using while
    while (n != 0) {
        int digit = n % 10;           // Get last digit
        printf("%d", digit);
        reversed = reversed * 10 + digit; // Append digit
        n = n / 10;                   // Remove last digit
    }

    // Output result
    printf("Reversed number: %d\n", reversed);

    return 0;
}




