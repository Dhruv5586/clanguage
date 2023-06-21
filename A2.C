#include<stdio.h>
#include<conio.h>
void main()
{
     int c;
     int d;
     int g;
     int h;
     clrscr();
     printf("enter c value:\n");
     scanf("%d",&c);
     printf("enter d value:\n");
     scanf("%d",&d);
     printf("enter g value:\n");
     scanf("%d",&g);
     printf("enter h value:\n");
     scanf("%d",&h);
     printf("l:%d",(c+d)*(g+h));
     getch();
}