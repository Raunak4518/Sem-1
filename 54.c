//PROGRAM TO READ AN ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS
#include<stdio.h>
int main(){
    int num[10];
    int sum=0;
    printf("enter the numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    printf("sum of all the numbers =%d\n",sum);
    return 0;
}