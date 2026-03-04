#include <stdio.h>
#include <conio.h>
int main()
{
    int big,a,b,c,d;
    printf("Enter the digits:");
    scanf("%d %d %d ",&a,&b,&c);
    big=a;
    if(big<b)
    {
        big=b;
        printf("\nBiggest number is %d",big);
        
    }
    else if(big<c)
    {
        big =c;
        printf("\nBiggest number is %d",big);
    }
    else
    {
        big =a;
        printf("\nBiggest number is %d",big);

    }
    getch();
}
