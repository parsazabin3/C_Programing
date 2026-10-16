#include<stdio.h>
int main(){
    float p,r,t,interest;
    printf("enter the principal amount,rate of interest,time : \n");
    scanf("%f %f %f",&p,&r,&t);

    interest = (p*r*t)/100;
    printf("so the simple interest is : %.3f ",interest);

    return 0;
}