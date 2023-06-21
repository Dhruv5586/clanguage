#include<stdio.h>
#include<conio.h>
void main()
{
     int a=1,b=1,n;
     clrscr();
     printf("enter no of loop:");
     scanf("%d",&n);
     do
     {
     printf("%d\n",b);
     b=b*2;
     a++;
	 }
   while(a<=n);

     getch();
}