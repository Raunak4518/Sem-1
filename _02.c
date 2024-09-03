//Program to read marks of five subject of a student and calculate total and percentage
#include<stdio.h>

int main(){
    int s1,s2,s3,s4,s5,t;
    float p;
    printf("enter marks in subject 1 \n");
    scanf("%d",&s1);
    printf("enter marks in subject 2 \n");
    scanf("%d",&s2);
    printf("enter marks in subject 3 \n");
    scanf("%d",&s3);
    printf("enter marks in subject 4 \n");
    scanf("%d",&s4);
    printf("enter marks in subject 5\n");
    scanf("%d",&s5);
    t= s1 + s2 + s3 + s4 + s5;
    printf("total marks =%d\n",t);
    p=t/5;
    printf("percentage =%f",p);
    return 0;

}