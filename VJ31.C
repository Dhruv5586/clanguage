#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b;
     clrscr();
     a=5;
     do
     {
     b=a;
     do
     {
       printf("%d",b);
       b++;
     }
     while(b<=5);
       printf("\n");
       a--;
       }
       while(a>=1);
     getch();
}