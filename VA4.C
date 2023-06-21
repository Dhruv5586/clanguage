#include<stdio.h>
#include<conio.h>
void main()
{
     int a;
     clrscr();
     printf("enter a value:");
     scanf("%d",&a);
     if(a%5==0&&a%3==0)
     {
       printf("its divisible by 5 and 3");
}else
{
       printf("its not divisible by 5 and 3");
       }
     getch();
}