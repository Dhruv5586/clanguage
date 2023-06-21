#include<stdio.h>
int main(){
	int a[5],b[5],i,sum[5];
	for(i=0;i<5;i++){
		printf("Enter A[%d] : ", i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("Enter B[%d] : ", i);
		scanf("%d",&b[i]);
	}
	printf("A\tB\tSum\n");
	for(i=0;i<5;i++){
		sum[i] = a[i] + b[i];
		printf("%d\t%d\t%d\n",a[i],b[i],sum[i]);
		
	}
}