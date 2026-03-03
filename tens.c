//Program to find the sum of natural number from1 to n using while loop 
#include <stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("\nEnter the value of n:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i=i++;

    }
    printf("%d",sum);
    return 0;
}