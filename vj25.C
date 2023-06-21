#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c=1;
     clrscr();
     a=1;
     do
     {
     b=1;
     do
     {
       printf("%d",c++);
       b++;
     }
     while(b<=a);
     printf("\n");
     a++;
     }
     while(a<=5);
     getch();
}