//  PROGRAM TO READ THREE NOS. AND PRINT MAX
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(c>a){
            printf(" max no is %d",c);
        }
        else{
            printf("max no is %d",a);
        }
    }
    else{
        if(b>c)
        {printf("max no is %d",b);}
        else{printf("max no is %d",c);}
    } 
    return 0;
}