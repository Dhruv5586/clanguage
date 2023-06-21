#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
for(a=1; a<=9; a+=2)
{
for(b=1; b<=9; b+=2)
{
printf("%d \t",a);
}
printf("\n");
}

getch();
}