#include<stdio.h>
void main(){
	int a[3][3],i,j,n=0,n1=0,n2=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter Vala[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d ",a[i][j]);
			if(i==j){
				n=n+a[i][j];
			}else if(i<j){
				n1=n1+a[i][j];
			}else{
				n2=n2+a[i][j];
			}
		}printf("\n");
	}printf("\n");
	printf("Diagonal Elements Total : %d\n",n);
	printf("upper Triangle Total : %d\n",n1);
	printf("Lower Triangle Total : %d",n2);
}