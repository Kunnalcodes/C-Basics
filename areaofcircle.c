/* Program to get the area of a circle */
#include <stdio.h>
int main()
{
    float r,area;
    printf("Enter the radius for the circle:");
    scanf("%f",& r);
    area=3.14*r*r;
    printf("The area of the circle is=%f",area);
    return 0;
}