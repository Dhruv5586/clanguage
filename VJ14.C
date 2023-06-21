#include<stdio.h>
#include<conio.h>
void main()
{
     int a=1,n;
     clrscr();
     printf("enter n value:");
     scanf("%d",&n);
     do
     {
     printf("%d ",a);
     printf("%d\n",a*a);
     a++;
     }
     while(a<=n);
     getch();
}