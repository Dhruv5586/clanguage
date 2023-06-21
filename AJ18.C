#include<stdio.h>
#include<conio.h>
void main()
{
     char a=65;
     clrscr();
     do
     {
     printf("%c\n" ,a);
     a+=2;
     }
     while(a<=90);
     getch();
}