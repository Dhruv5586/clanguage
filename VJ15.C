#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,n;
clrscr();
printf("enter the value");
scanf("%d",&n);
while(a<=n)
{
  {
  if(a%2==0)
   {
    printf("%d\t",a*a);
   }
  else
   {
     printf("%d\t",a);
   }
  }
  printf("\n");
  a++;
 }
getch();
}