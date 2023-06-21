#include<stdio.h>
#include<conio.h>
void main()
{
     float a,ruppes;
     clrscr();
	printf("ruppes:");
	scanf("%f",&a);
	if(a<=200)
	{
		ruppes=((a*60)/100)+50;
		printf("charge:%f",ruppes);
	}
	else if(a<=300)
	{
		ruppes=((a*80)/100)+50;
		printf("charge:%f",ruppes);
	}
	else if(a>300)
	{
		ruppes=((a*90)/100)+50;
		printf("charge:%f",ruppes);
	}
	if(ruppes>300)
	{
		printf("\ntotal amount:%f",ruppes+(ruppes*15/100));
	}
	else
	{
		printf("\ntotal amount:%f",ruppes);
	}
     getch();
}