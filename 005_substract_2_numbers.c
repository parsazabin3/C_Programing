#include<stdio.h>
int main(){
    int num1,num2,substraction;
    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);

    substraction = num1-num2;
    printf("The substraction of %d and %d is = %d",num1,num2,substraction);
 return 0; 
}