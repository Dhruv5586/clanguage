#include<stdio.h>
#include<conio.h>
void main()
{
     char a,b;
     clrscr();
     a=0;
     do
     {
     b=a;
     do
     {
       printf("%c",b+65);
       b--;
     }
     while(b>=0);
       printf("\n");
       a++;
       }
     getch();
}