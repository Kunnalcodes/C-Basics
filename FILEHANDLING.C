#include <stdio.h>
void main()
{
    FILE *p;
    char ch;
    int ln=0,t=0,w=0,c=0;
    p=fopen("text1.txt","r")
    ch=getc(p);
    while (ch!=EOF)
    {
        if (ch=="\n")
        ln++;
       else if (ch=="\t")

       t++;
       else if (ch==" ")
       w++;
       else
       c++;
       ch=getc(p);
    
    }
        else if (ch=="\t")
        t++;
        else if (ch==" ")
        w++;
        else
        c++;
        ch=getc(p);
    
    fclose(p);
    printf("Lines =%d,tabs=%d,words=%d,character=%d\n",ln,t,w,c)
}
