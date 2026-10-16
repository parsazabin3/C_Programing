#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5,total;
    float percentage;

    printf("enter the marks of 5 subjects : \n");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);

    total=sub1+sub2+sub3+sub4+sub5;
    percentage=(total*100)/500;
printf("the percentage is =%.4f",percentage);
return 0;

}