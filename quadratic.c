/* Program to find roots of quadratic equation */
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float a,b,c,d,x1,x2,x;
    printf("\n Enter the coefficients a,b and c:");
    scanf("%f%f%f", &a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("\n Root are real and unequal");
        printf("\n %6.2f % 6.2f",x1,x2);


    }
    else
       if(d==0)
       {
        x=-b/(2*a);
        printf("\n Root are real and equal");
        printf("\n %6.2f",x);
       }
    else
    printf("\n No Real Roots ,Roots are complex");
       getch();

}