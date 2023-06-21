#include<stdio.h>
#include<conio.h>
void main()
{
     int i,a=1,n;
     clrscr();
     printf("enter number of loop:");
     scanf("%d",&n);
     for (i=1;i<=n;i++)
     {
       printf("%d\t",a);
       a=a*2;
     }

     getch();
}