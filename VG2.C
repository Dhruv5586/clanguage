#include<stdio.h>
#include<conio.h>
void main()
{
     char  i;
     clrscr();
     for (i=65;i<=90;++i)
     {
     printf("%c - %c\n",i,i+32);
     }

     getch();
}