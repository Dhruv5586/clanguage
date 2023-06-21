
#include<stdio.h>
#include<conio.h>
void main()
{
     int a;
     clrscr();
     printf("enter a value");
     scanf("%d",&a);
     if(a%5==0)
     {
       printf("its divisible by 5");
     }else
     {
       printf("its not devisible by 5");
       }
     getch();
}