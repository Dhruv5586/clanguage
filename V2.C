#include<stdio.h>
#include<conio.h>
void main()
{
     int a;
     int b;
     int c;
     int d;
     clrscr();
     printf("enter a value:\n");
     scanf("%d",&a);
     printf("enter b value:\n");
     scanf("%d",&b);
     printf("enter c value:\n");
     scanf("%d",&c);
     printf("enter d value:\n");
     scanf("%d",&d);
     printf("ans:%d",a/b*c-d);
     getch();
}