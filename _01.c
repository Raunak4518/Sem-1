// PROGRAM TO CALCULATE SIMPLE INTEREST
#include<stdio.h> //header file

int main()
{
    int p,t,r; //declaring 3 variables to take principal amount , time and rate as input
    float i; //variable for calculating simple interest
    printf("enter the value of  principal amount\n");
    scanf("%d",&p);//taking input of principal amount
    printf("enter the time period\n");
    scanf("%d",&t);//taking input of time period
    printf("enter the rate of interest\n");
    scanf("%d",&r);//taking input of interest rate
    i=p*t*r;//calculating simple interest
    printf("simple interest of the following input =%f ",i);
    return 0;
}