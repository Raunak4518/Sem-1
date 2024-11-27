#include<stdio.h>
int main(){
    char ch='A';
    int n;
    printf("enter the number of code");
    scanf("%d",&n);
for(int i=0;i==0;i){
    if (n>26||n<0)
    {
        printf("enter a positive value less than 27\n");
        scanf("%d",&n);

    } else {break;}
}
for(int i=1;i<=n;i++)
{   for(int j=1;j<=i;j++){
        printf("%c",ch);
    }
    printf("\n");
    ch++;


}
return 0;

}
