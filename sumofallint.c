#include <stdio.h>
#include <conio.h>
int main()
{
    int x[50],n,i,big;
    printf("How many intgers:---");
    scanf("%d",&n);
    printf("\n Enter all those number:\n");
    for(i=0; i<n ;i++ )
    scanf("%d",&x[i]);
    
    big=x[0];
    /*Loop to find sum of all integers*/
    for (i=1;i<n;i++)
        if(x[i]>big)
        big=x[i];
    printf("\n %d is the greatest no ",big );
    getch();
}