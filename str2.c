#include<stdio.h>
int main(){
	char str[20];
	int i=0,x=0,z;
	printf("Enter String : ");
	gets(str);
	while(str[i]!=0){
		i++;
		z=i-1;
	}
	while(x<i/2){
		printf("%c%c",str[x],str[z]);
		x++;
		z--;
	}
	if(i%2!=0)printf("%c",str[i/2]);
}