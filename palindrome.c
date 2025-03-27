#include <stdio.h>

int pali() {
    int number, reversed = 0, remainder, original;

    // Ask the user to input a number
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    original = number;  // Store the original number

    // Reverse the given number
    while (number != 0) {
        remainder = number % 10;             // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        number /= 10;                        // Remove the last digit from the original number
    }

    // Check if the original number is equal to its reversed number
    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

//    return 0;
}
