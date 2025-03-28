#include <stdio.h>

int big2 {
    // Declare two variables to store the numbers
    int num1, num2;

    // Input the two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Compare the numbers and print the larger one
    if (num1 > num2) {
        printf("The larger number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("The larger number is: %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
