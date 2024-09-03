//PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of first number\n");
    scanf("%d",a);
    printf("enter the value of second number\n");
    scanf("%d",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nnew value of first number is %d",a);
    printf("\nnew value of second number is %d",b);
    return 0;

}