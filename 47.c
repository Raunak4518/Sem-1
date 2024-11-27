//to print a pattern
#include<stdio.h>

int main(){
    int n;
    printf("enter the number of lines\n");
    scanf("%d",&n);
    for(int i=0;i==0;i){
    if (n>26||n<0)
    {
        printf("enter a positive value less than 27\n");
        scanf("%d",&n);

    } else { break;}
    }
    for (int i=1;i<=n;i++)
    {
        char ch='A';
        for(int j=1;j<=i;j++ )
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}