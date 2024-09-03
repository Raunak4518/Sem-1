//PROGRAM TO CALCULATE GROSS SALARY
#include <stdio.h>

int main() {
    float basicSalary, hra, da, otherAllowances, grossSalary;

    // Input basic salary
    printf("Enter the Basic Salary: ");
    scanf("%f", &basicSalary);

    // Input HRA
    printf("Enter the HRA (House Rent Allowance): ");
    scanf("%f", &hra);

    // Input DA
    printf("Enter the DA (Dearness Allowance): ");
    scanf("%f", &da);

    // Input Other Allowances
    printf("Enter Other Allowances: ");
    scanf("%f", &otherAllowances);

    // Calculate Gross Salary
    grossSalary = basicSalary + hra + da + otherAllowances;

    // Output the Gross Salary
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}