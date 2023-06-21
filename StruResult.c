#include<stdio.h>
struct student{
    int rollno,m,s,e,t;
    char name[50];
    float per;
};
void main(){
    struct student a[5];
    int i;
    for(i=0;i<3;i++){
        printf("Enter Roll No :");
        scanf("%d",&a[i].rollno);
        printf("Enter Name :");
        scanf("%s",&a[i].name);
        printf("Enter Maths Marks :");
        scanf("%d",&a[i].m);
        printf("Enter Science Marks :");
        scanf("%d",&a[i].s);
        printf("Enter English Marks :");
        scanf("%d",&a[i].e);
    }
    printf("\n\nRoll No\tName\tMaths\tScience\tEnglish\tTotal\tPer\tGrade");
    for(i=0;i<3;i++){
        a[i].t = a[i].m + a[i].s + a[i].e;
        a[i].per = (float)a[i].t / 3;
        printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f\t",a[i].rollno,a[i].name,a[i].m,a[i].s,a[i].e,a[i].t,a[i].per);
        if(a[i].m<35 || a[i].s<35 || a[i].e<35){
            printf("Fail...");
        }else if(a[i].per>=80){
            printf("A");
        }else if(a[i].per>=65 || a[i].per<80){
            printf("B");
        }else if(a[i].per>=50 || a[i].per<65){
            printf("C");
        }else if(a[i].per>=35 || a[i].per<50){
            printf("D");
        }
    }
}