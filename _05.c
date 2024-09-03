//PROGRAM TO SWAP TOW VARIABLES USING THIRD VARIABLE
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the values of first number\n");
    scanf("%d",&a);
    printf("enter the values of second number\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("now new value of first number =%d",a);
    printf(" \nnow new value of second number =%d",b);
    return 0;
}