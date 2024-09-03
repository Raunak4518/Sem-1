// PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISIONPROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION
#include <stdio.h>

int main() {
    float marks[5];
    float total = 0.0, average;
    int i;

    // Input marks for five subjects
    printf("Enter the marks for five subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    // Calculate the average
    average = total / 5;

    // Print the average marks
    printf("Average Marks: %.2f\n", average);

    // Determine and print the division based on average marks
    if (average >= 60) {
        printf("Division: First\n");
    } else if (average >= 50) {
        printf("Division: Second\n");
    } else if (average >= 40) {
        printf("Division: Third\n");
    } else {
        printf("Division: Fail\n");
    }

    return 0;
}
