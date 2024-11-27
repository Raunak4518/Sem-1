#include<stdio.h>

int main(){
    int t;
    r:
    printf("enter the number of test cases between 1 to 15\n");
    scanf("%d",&t);
    if(t<0){
        printf("number of test cases cannot be negative \n");
        goto r;

    }

    for(int i=0;i<t;i++){
        int n;
        int fibotemp1=0,fibotemp2,fibo=1;
        printf("enter the number \n");
        scanf("%d",&n);
        if(n<0){
            printf("enter a positive number\n");
            continue;
        }
        do{
            if(n==0){
                printf("isfibo\n");
                break;
            }
            if(n==1){
                printf("isfibo\n");
                break;
            }
            fibotemp2=fibo;
            fibo=fibo+fibotemp1;
            fibotemp1=fibotemp2;
            if(n==fibo){
                printf("isfibo\n");
                break;
            }
            if(n<fibo){
                printf("isnotfibo\n");
                break;
            }


        } while(fibo<n);
    }
}