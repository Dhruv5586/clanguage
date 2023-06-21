#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b;
     clrscr();
     for (a=2; a<=10; a+=2)
     {
     for(b=2; b<=10; b+=2)
     {
       printf("%d \t",a);
     }
       printf("\n");
       }
     getch();
}