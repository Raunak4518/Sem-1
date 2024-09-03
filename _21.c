#include <stdio.h>

int main() {
    char operation;
    double num1, num2, result;
    
    // Prompt the user to enter the operation and two numbers
    printf("Enter the operation (a for addition, s for subtraction, m for multiplication, d for division): ");
    scanf(" %c", &operation); // Note the space before %c to handle any leading whitespace
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    // Perform the operation based on the user's choice
    switch (operation) {
        case 'a':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case 's':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case 'm':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case 'd':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
            break;
    }
    
    return 0;
}
