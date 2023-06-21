#include<stdio.h>
#include<conio.h>
void main()
{
     int a=1,n,total=0;
     clrscr();
     printf("enter n value:");
     scanf("%d",&n);
     do
     {
     total+=a;
     printf("%d\n",a);
     a+=2;
     }
     while(a<=n);
     printf("total:%d",total);
     getch();
}