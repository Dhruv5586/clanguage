#include<stdio.h>
#include<conio.h>
void main()
{
     int a=30, b;
     clrscr();
  printf("a:%d",a);
     a++; // 30 31
     a--; // 31 30
     ++a; // 31 31
     --a; // 30 30
     a++; // 30 31
     a--; // 31 30
     --a; // 29 29
     a++; // 29 30
     a--; // 30 29
     getch();
}