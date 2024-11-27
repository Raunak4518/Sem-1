#include<stdio.h>
void pcheck(int n);
int main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    pcheck(n);
    return 0;

    
}
void pcheck(int n){
    int num,rev,rem;
    num=n;
    rev=0;

    
        while(n>0)
        {
            rem=n%10;
            rev= rev*10 +rem;
            n =n/10;
            
        }
        if (rev==num)
        {printf("the number is a palindrome");
        }
        else {
            printf("the number is not a palindrome");
        }
}
