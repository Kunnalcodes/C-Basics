#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char st[100],*sptr;
    int count =0;
    printf("Enter a string: ");
    gets(st);
    sptr=st;
    while(*sptr !="\0")
    {
        switch(toupper(*sptr))
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
                break;
        }
        sptr++;
    }
    printf("\n no of vowel in statement are:%d",count);
    getch();
}