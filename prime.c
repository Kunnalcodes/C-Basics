#include <stdio.h>
int main()
{
    int i,n=5,temp=0;
    printf("Enter the Digit:\n");
    scanf("%f",&n);
    for(i=2;i<=n/2;i++)
       {if(n%i==0)
        {
            temp++;
            break;
    
        }}
        
       // check the value 
       if (temp==0 && n!= 1)
       {
        printf("no is prime digit");
       }

        else
        {
            printf("not a prime digit");
        }

        
           return 0;
       
       
}