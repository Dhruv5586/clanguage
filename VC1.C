#include<stdio.h>
#include<conio.h>
void main()
{
     char a,b,c;
     clrscr();
     printf("enter the value:");
     scanf("%c",&a);
     b=(a=='a' || a=='e'|| a=='i' || a=='o' || a=='u');
     c=(a=='A' || a=='E'|| a=='I' || a=='O' || a=='U');
     if(b||c)
     {
     printf("it is vovel");
     }
     else
     {
     printf("it is consonant");
     }
      getch();
}