#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c,n,i;
clrscr();
printf("enter the number:");
scanf("%d",&n);
for(i=3;i<=n;i++)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
}
getch();
}