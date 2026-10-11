#include<stdio.h>
int main(){
double a,b, quotient;

printf("enter first number: \n");
scanf("%lf",&a);

printf("enter second number : \n");
scanf("%lf",&b);
quotient = a/b;
printf("the quotient of %lf and %lf is %lf",a,b,quotient);

return 0;
}