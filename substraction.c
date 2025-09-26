#include <stdio.h>

int main() {
    int num1, num2, result;

    // Prompt the user to enter the first number
    printf("Enter the first number: \n");
    // Read the first number from the user
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: \n");
    // Read the second number from the user
    scanf("%d", &num2);

    // Perform subtraction
    result = num1 - num2;

    // Display the result
    printf("The subtraction of %d and %d is: %d\n", num1, num2, result);

    return 0; // Indicate successful execution
}