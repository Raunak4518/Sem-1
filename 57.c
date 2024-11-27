//PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS
#include<stdio.h>
int main()
{
    int n; 
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int array1[n];
    for(int i =0 ; i<n; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&array1[i]);
        
    }
     int max = array1[0];
    for(int k =0; k <n; k++)
    {
        if (max <array1[k])
        {
            max = array1[k];
        }
    }
    int max2=array1[0];
    for(int k =0; k <n; k++)
    {
        if ( array1[k]==max)
        continue;
        if (max2 <array1[k])
        {
            max2 = array1[k];
        }
    }
    printf("maximum number =%d,and second max no =%d",max,max2);
    return 0;
}