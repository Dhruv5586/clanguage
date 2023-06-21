#include<stdio.h>
int main(){
	char str[20],str1[20],x=0,y=0;
	printf("Enter String : ");
	gets(str);
	printf("Enter String1 : ");
	gets(str1);
	while(str[x]!=0)x++;
	while(str1[y]!=0){
		str[x++]=str1[y];
		y++;
	}str[x]='\0';
	puts(str);
}