#include<stdio.h>

void even(int n);
int main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    even(n);
    return 0;
}
void even(int n){
    if(n%2==0)
        printf("the number is even");
    else
        printf("the number is odd");

}