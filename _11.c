// PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME
#include <stdio.h>

int main() {
    int inputSeconds, hours, minutes, seconds;

    // Prompt the user to enter the total seconds
    printf("Enter the total seconds: ");
    scanf("%d", &inputSeconds);

    // Calculate hours, minutes, and seconds
    hours = inputSeconds / 3600;
    minutes = (inputSeconds % 3600) / 60;
    seconds = inputSeconds % 60;

    // Display the result
    printf("%d seconds is equivalent to %d hours, %d minutes, and %d seconds\n", inputSeconds, hours, minutes, seconds);

    return 0;
}
