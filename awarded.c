/* Program to declare class awarded for a given percentage of marks */
#include <stdio.h>
#include <conio.h>
void main()
{
    int math,evs,beee,phy,pps;
    printf("Enter the marks of subjects:\n");
    scanf("%d%d%d%d%d", & math,& evs,& beee,& phy,& pps);
    float perc;
    perc=(math+evs+beee+phy+pps)/5.0;
    printf("\n percentage obtained by the student=%f",perc);
    
    if(perc>=70){
        printf("\nDistinction");
    }
    else if(perc<=70 && perc>=60){
        printf("\nFirst Divison");
    }
    else if(perc<=60 && perc>=50){
        printf("\nSecond Divison");
    }
    else if(perc<=50 && perc>=40){
        printf("\nThird Divison");
    }
    else if(perc<40){
        printf("\nFail");
    }
    getch();

}