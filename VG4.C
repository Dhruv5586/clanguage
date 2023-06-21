#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,total=0;
clrscr();
printf("enter n:");
scanf("%d",&n);
for(a=1;a<=n;a+=2)
{
total+=a;
printf("%d\n",a);
}
printf("total:%d",total);
getch();
}