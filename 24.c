#include<stdio.h>
#include<math.h>
int main(){
    float x,y,n;
    printf("enter x,n\n");
    scanf("%f%f",&x,&n);

    if (n==1){
        y=1+x;
    }
    else if (n==2){
        y=1+x/n;
    }
    else if (n==3){
        y=1+ pow(x,n);
    }
    else y=1+n*x;
    printf("\nvalue of y =%f",y);
    return 0;


}