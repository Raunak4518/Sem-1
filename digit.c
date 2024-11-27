#include<stdio.h>

int main(){
int t;
r:
printf("enter the number of test cases between 1 to 15\n");
scanf("%d",&t);
if(t<1||t>15){
 printf("number of test cases should be between 1 and 15 \n");
 goto r;
}
for(int i=0;i<t;i++){
    int n,num,r,rem;;
    printf("enter the number \n");
    scanf("%d",&n);
    
    num=n;
    r=0;

    
        while(n>0)
        {
            rem=n%10;
            
            if(rem==0)
            continue;

            if(num%rem==0){
            
            r++;
            }
            n =n/10;
            
        }
        if(n<0){
            printf("enter a positive number \n");
            continue;
        }
        printf("the number of places by which  %d  is divisible are %d \n",num,r);
}
return 0;

}