#include<stdio.h>
int main(){
    float a,b,product;

    printf("Enter first float : \n");
    scanf("%f",&a);

    printf("Enter second float : \n");
    scanf("%f",&b);

    product = a*b;
    printf("Product of %f and %f is %f",a,b,product);
    return 0;
}