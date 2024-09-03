#include <stdio.h>

// Function to calculate power
// It calculates base raised to the power of exponent
float power(float base, int exponent) {
    float result = 1.0;
    int i;

    for (i = 0; i < exponent; i++) {
        result *= base;
    }
    
    return result;
}

int main() {
    float base;
    int exponent;
    float result;

    // Input base and exponent
    printf("Enter the base: ");
    scanf("%f", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate power using custom function
    result = power(base, exponent);

    // Print the result
    printf("%.2f raised to the power %d is %.2f\n", base, exponent, result);

    return 0;
}
