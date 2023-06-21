#include<stdio.h>
#include<conio.h>
void main()
{
     char a,b;
     clrscr();
     a=65;
     do
     {
     b=65;
     do
     {
       printf("%c",b);
       b++;
     }
     while(b<=a);
       printf("\n");
       a++;
       }
       while(a<=69);
     getch();
}