#include<stdio.h>
#include<conio.h>
 void main()
{
 int a,n;
 clrscr();
 printf("enter number:");
 scanf("%d",&n);
 printf("\n even number between 1to %d are:\n",n);
 for(a=0;a<n;a+=2)
 {
 printf("%d\n",a);
 }
 getch();
}