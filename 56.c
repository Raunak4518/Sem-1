/* PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE, 
NEGATIVE, AND ZERO ELEMENTS*/
#include<stdio.h>
int main(){
    int num[10];
    int p=0,n=0,z=0;
    printf("enter the numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        if (num[i]>0){
            p++;
            }
            else if (num[i]<0){
            n++;
            }
            else {
                z++;
            }
    }
    printf("number of positive numbers =%d",p);
    printf("\nnumber of negative numbers =%d",n);
    printf("\nnumber of zero number =%d",z);
    return 0;
}