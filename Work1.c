#include<stdio.h>
int rev(int x){
    int y=0;
    while(x!=0){
        y=y*10+x%10;
        x/=10;
    }return y;
}
int main(){
    int x, n;
    printf("Enter Number : ");
    scanf("%d",&x);

    n = rev(x);
    printf("The Revers Number is :%d",n);
}