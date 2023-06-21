#include<stdio.h>
#include<conio.h>
void main()
{
     int a=1, b=1;
     clrscr();
   while(a<=5)
    {
    b=1;
    while(b<=a)
    {
    printf("%d",b);
    b++;
    }
    printf("\n");
    a++;
    }
     getch();
}