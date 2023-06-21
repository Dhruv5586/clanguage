#include<stdio.h>
#include<conio.h>
 void main()
{
  int a,n;
  clrscr();
  printf("enter a:");
  scanf("%d",&n );
  for(a=1;a<=n;a++)
  {
      printf("number%d\n",a);
  }
  getch();
}