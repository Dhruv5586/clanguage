#include<stdio.h>
int main()
{
		int n,i=0;
		float x=0.5;
		printf("enter the a:");
		scanf("%d",&n);
		//printf("%f",x);
		do{
			printf("%.1f ",x);
			x+=i;
			i++;
		}while(i<=n);
}