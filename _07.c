// PROGRAM TO CALCULATE AREA OF A TRIANGLE
#include<stdio.h>
#include<math.h>
int main (){
    int a,b,c;
    float s,area;
    printf("enter the lenght of sides\n");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));

    printf("area of the traingle=%f",area);

    return 0;
}