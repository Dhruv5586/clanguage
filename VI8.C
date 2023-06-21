#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c=65;
     clrscr();
     for (a=1; a<=5; a++)
     {
	for (b=1; b<=a; b++ )
	{
	  if(b%2==1)
	    {
	       printf("%c",c+32);
	    }
	  else
	   {
	       printf("%c",c);
	   }
	    c++;
	 }
       printf("\n");
   }
     getch();
}