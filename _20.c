#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    
    // Prompt the user to enter an operator and two numbers
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to skip any whitespace
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    // Perform the operation based on the user input
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }
    
    return 0;
}
