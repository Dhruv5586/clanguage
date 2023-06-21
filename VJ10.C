#include<stdio.h>
#include<conio.h>
void main()
{
     char a=65;
     clrscr();
     do
     {
     printf("%c - %c \n",a,a+32);
     a++;
     }
     while(a<=90);
     getch();
}