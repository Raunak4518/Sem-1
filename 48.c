//print a pattern
#include<stdio.h>
int main(){
    int n;
    printf("enter the no of lines\n ");
    scanf("%d",&n);
    
    for ( int i=1; i<=n;i++)
    {   
        for (int j=n-i;j>=0;j--)
        {
            printf(" ");
        }
        for (int k=1;k<=i;k++)
        {printf("%d ",k);}
        printf("\n");
    }
    return 0;
}