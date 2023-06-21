#include<stdio.h>
#include<conio.h>
void main()
{
int a,n;
clrscr();
printf("enter value n:");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
printf("%d\n",a*a);
}
getch();
}