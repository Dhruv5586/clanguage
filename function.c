#include<stdio.h>
int squre(){
	int i,j;
	char x=65;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf(" %c ",x-j+1);
		}x++;
		printf("\n");
	}
}
int main(){
	squre();
}