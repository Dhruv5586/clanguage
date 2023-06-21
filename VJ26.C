#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b;
     clrscr();
     a=5;
     while(a>=1)
     {
     b=5;
     while(b>=a)
     {
     printf("%d",b);
     b--;
     }
     printf("\n");
     a--;
     }
     getch();
}