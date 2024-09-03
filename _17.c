// PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR.(&&)
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {printf(" max no is %d",a);}
    else
    { if(b>a && b>c)
    {printf("max number is %d",b);}
    else {printf(" max number is %d",c);}
    }
    return 0;
}