/* Program to get the avg of three digits*/
#include <stdio.h>
int main()
{
    int a,b,c,avg,sum;
    printf("Enter the value a ,b ,c:");
    scanf("%d %d %d",& a,& b,& c);
    sum=a+b+c;
    avg=sum/3;
    printf("The average of 3 digits is =%d",avg);
    return 0;

}