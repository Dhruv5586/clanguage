#include<stdio.h>
#include<conio.h>
void main()
{
int a,n;
clrscr();
printf("enter n value:");
scanf("%d",&n);
a=n;
do
{
printf("%d\n" ,a);
a--;
}
while(a>=1);
getch();
}