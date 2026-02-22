#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    float a,b,c,area;
    printf("\n enter the three size of the triangle:");
    scanf("%f,%f,%f",& a,& b,& c,& area);
    s=(a+b+c)/2
    area=sqrt(s*(s-a)*(s-b)*(s-c))
    printf("\n Area of the triangle is =% 6.2 f sq units",area);
    getch();

    return 0;
}
