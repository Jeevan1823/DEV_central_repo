#include <stdio.h>

int fact() {
    int number, factorial = 1;
    
    // Ask the user to input a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    // If the number is negative, factorial is not possible
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a loop
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        
        // Print the result
        printf("Factorial of %d is %d\n", number, factorial);
    }
    
    //return 0;
}
