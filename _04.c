//PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES
#include<stdio.h>
int main(){
    float f,c;
    printf("enter temperature in fahrenheit\n");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("temperature in dergree centigrade %f",c);
    return 0;
}
