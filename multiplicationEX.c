#include <stdio.h>

int main() 
{
    int num, i;

    // taking user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // printing the table
    printf("Table for %d:\n", num);
    for(i = 1; i <= 10; i++) 
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }

    return 0;
}