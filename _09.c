//PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND
#include<stdio.h>
int main(){
    int h,m,s,ts;
    printf("enter time in form of hr_min_sec\n");
    scanf("%d%d%d",&h,&m,&s);
    ts=(3600*h)+(60*m)+s;
    printf("total second =%d",ts);
    return 0;
}