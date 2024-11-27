//PROGRAM TO REVERSE AN ARRAY.
#include<stdio.h>

int main(){
    int n,t;
    printf("enter the number of inputs in array\n");
    scanf("%d",&n);
    int a1[n];
    for(int i=0;i<n;i++){
        printf("enter the %dst no of the array\n",i+1);
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<n/2;
    i++){
        t=a1[i];
        a1[i]=a1[n-1-i];
        a1[n-1-i]=t;
    }
    printf("the new order of array is :\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a1[i]);
    }
    return 0;
}