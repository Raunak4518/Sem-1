#include<stdio.h>

int main(){
    int a1[10],a2[10],a3[10];
    printf("enter the numbers in 1st array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a1[i]);
    }
    printf("enter the numbers in 2nd array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a2[i]);
    }
    for(int i=0;i<10;i++){
        a3[i]=a1[i]+a2[i];
    }
    printf("sum of the two array are :\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",a3[i]);
    }
    return 0;
}

