#include<stdio.h>
#include<conio.h>
void main()
{
int a=50;
int b=40;
int c=60;
clrscr();

if (a>b)
{
if(a>c)
{
printf("a is big");
}
else
{
printf("c is big");
}
}
else
{
printf("b is big");
}
getch();
}