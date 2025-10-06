#include <stdio.h>

int main() {
    int num1, num2, product;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    // Read the first number from the user
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    // Read the second number from the user
    scanf("%d", &num2);

    // Calculate the product of the two numbers
    product = num1 * num2;

    // Display the result
    printf("The product of %d and %d is: %d\n", num1, num2, product);

    return 0; // Indicate successful execution
}
