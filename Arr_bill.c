#include<stdio.h>
void main(){
	int i,pr[5]={700,100,5500,11000,8000},qty[5],amt,disc,discamt,gst,billamt,t1=0,t2=0,t3=0;
	for(i=0;i<5;i++){
		printf("Enter Qty[i] : ",i);
		scanf("%d",&qty[i]);
	}
	printf("\nProduct\t\tPrice\tQty\tAmount\tDisc\tD-Amt\tGST\tBillAmt\n");
	for(i=0;i<5;i++){
		amt=pr[i]*qty[i];
		disc=amt*10/100;
		discamt=amt-disc;
		gst=discamt*18/100;
		billamt=discamt+gst;
		t1=t1+discamt;
		t2=t2+gst;
		t3=t3+billamt;
		if(i==0)
			printf("Keybord");
		else if(i==1)
			printf("Mouse");
		else if(i==2)
			printf("Monitor");
		else if(i==3)
			printf("Pro");
		else if(i==4)
			printf("RAM");
		printf("\t\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",pr[i],qty[i],amt,disc,discamt,gst,billamt);
	}printf("\t\t\t\t\t\t%d\t%d\t%d",t1,t2,t3);
}