/* Program to find the simple and compound interest*/
#include <stdio.h>
int main()
{
    int SI,CI,P,R,T,N,Amount;
    printf("\nEnter the value of Principal:");
    scanf("%d", & P);
    printf("\nEnter the value of Rate:");
    scanf("%d", & R);
    printf("\nEnter the value of Time:");
    scanf("%d", & T);
    Amount=P*(1+R/100)^T;
    CI=Amount-P;
    printf("\nThe compund interest is =%d",CI);
    SI=P*R*T/100;
    printf("\nThe simple interest is =%d\a",SI);
    return 0;
}