/*program friendly program for sum and product*/
#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int a,b,sum,product;
    printf("\n Enter Value to A:");
    scanf("%d",& a);
    printf("\n Enter Value to B:");
    scanf("%d",& b);
    sum=a+b;
    product=a*b;
    printf("\n Sum = %d",sum);
    printf("\n Product = %d",product);
    

    return 0;
}
