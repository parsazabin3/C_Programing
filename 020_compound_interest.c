#include<stdio.h>
#include<math.h>
int main(){
float p,r,t,a,i;
    printf("enter principal amount,rate of interest,time :\n");
    scanf("%f%f%f",&p,&r,&t);

    a =p * pow((1+r/100),t);
    i = a-p;
printf("so the compound interest is %.5f",i);
    return 0;    
}
