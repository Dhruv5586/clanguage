#include<stdio.h>
void main(){
	int a[10],i,odd=0,even=0;
	for(i=0;i<10;i++){
		printf("Enter Val[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		if(i%2==0){
			even=even+a[i];
		}else{
			odd=odd+a[i];
		}
	}
	printf("Even Sum : %d",even);
	printf("\nOdd Sum : %d",odd);
}