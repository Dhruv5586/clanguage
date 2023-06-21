#include<stdio.h>
#include<conio.h>
void main()
{
     int k;
     int a;
     clrscr();
       printf("enter k value:\n");
       scanf("%d",&k);
       printf("enter a value:\n");
       scanf("%d",&a);
       printf("h:%d",((k-4)*(a*4))/100);
     getch();
}