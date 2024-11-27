/* PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND 
TOTAL NO. OF EVERY ELEMENT*/
#include<stdio.h>
int main(){
    int num[10];
    int e=0,o=0;
    printf("enter the numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        if (num[i]%2==0){
            e++;
            }
            else {
                o++;
            }
    }
    printf("number of odd numbers =%d",o);
    printf("\nnumber of even numbers =%d",e);
    return 0;
}