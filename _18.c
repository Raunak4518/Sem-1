//  PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) OPERATOR

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The maximum number is %d\n", max);
    return 0;
}
