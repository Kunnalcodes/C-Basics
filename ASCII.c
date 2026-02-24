/* Program to display ASCII value*/
#include <stdio.h>
#include <conio.h>
main()
{
    char ch;
    printf("Enter the Character:-");
    ch=_getche();
    printf("\n\n ASCII value of %c is %u",ch,ch);
    puts("\n Press any key to stop....");
    getch();

}