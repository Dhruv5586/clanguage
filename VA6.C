#include<stdio.h>
#include<conio.h>
void main()
{
     int year;
     clrscr();
     printf("enter the year:");
     scanf("%d",&year);
     if (year%4==0)
     {
       printf("its lip year");
     }else
     {
       printf("its not lip year");
       }
     getch();
}