#include<stdio.h>
void main(){
    int a,b,ch;
    printf("Enter A & B : ");
    scanf("%d%d",&a,&b);
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division");
    printf("\n\nEnter Your Choice : ");
    scanf("%d",&ch);

    switch (ch){
        case 1:
            printf("Addition of A & B is : %d\n",a+b);
            break;
        case 2:
            printf("Substraction of A & B is : %d\n",a-b);
            break;
        case 3:
            printf("Multiplication of A & B is : %d\n",a*b);
            break;
        case 4:
            printf("Division of A & B is : %d\n",a/b);
            break;
        default:
            printf("Wrong Choice...");
            break;
    }
}