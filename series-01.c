#include<stdio.h>
int main()
{
		int i=1,n,a=1;
		printf("enter n");
		scanf("%d",&n);
		
		while(i<=n){
			printf("%d ",a);
			i++;
			a=i*i;
		}
}