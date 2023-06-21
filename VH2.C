#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b;
     clrscr();
     for (a=5; a>=1; a--)
     {
     for(b=1; b<=5; b++)
     {
       printf("%d \t",a);
     }
       printf("\n");
       }
     getch();
}