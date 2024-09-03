//  PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT
#include<stdio.h>
int main(){
    int m,p,c,e;
    float cm;
    printf("enter marks in mathematics out of 200\n");
    scanf("%d",&m);
    printf("enter marks in physics out of 200\n");
    scanf("%d",&p);
    printf("enter marks in chemistry out of 200\n");
    scanf("%d",&c);
    printf("enter marks in entrance exam out of 100\n");
    scanf("%d",&e);
    cm=e+(m+c+p)/2;
    printf("cut off marks of the student=%f",cm);
    return 0;




}