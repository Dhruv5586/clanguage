#include<stdio.h>
#include<conio.h>
void main()
{
     int p;
     int r;
     int n;
     clrscr();
       printf("enter p value:\n");
       scanf("%d",&p);
       printf("enter r value:\n");
       scanf("%d",&r);
       printf("enter n value:\n");
       scanf("%d",&n);
       printf("a:%d",p*(1+(r/100)/n)-p);
     getch();
}