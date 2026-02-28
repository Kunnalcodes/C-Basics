#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    /*Celsius*/
    float f,c;
    printf("\n Degree fahrenheit ?\n");
    scanf("%f",& f);
    c=5/9*(f-32);
    printf("\n degree centigrade=",c);
    getch();

    return 0;
}
