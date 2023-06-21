#include<stdio.h>
#include<conio.h>
void main()
{
     int a=0,n,total=0;
     clrscr();
     printf("enter n value:");
     scanf("%d", &n);
     while(a<=n)
     {
     total+=a;
     printf("%d\n",a);
     a+=2;
     }
     printf("total:%d",total);
     getch();
}