#include<stdio.h>
int main(){
	char str[20],str1[20];
	int i,n,t=0;
	printf("Enter String : ");
	gets(str);
	while(str[t]!=0){
		t++;
		n=t-1;
	}
	for(i=0;i<t;i++){
		str1[i]=str[n];
		n--;
	}str1[i]='\0';
	printf("%s",str1);	
	}