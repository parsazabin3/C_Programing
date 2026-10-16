#include<stdio.h>
int main(){
 float units,rate,bill;
    printf("Enter electricity units:\n");
    scanf("%f",&units);
    printf("enter the rate for per unit:\n");
    scanf("%f",&rate);

    bill=units*rate;
    printf("So the electric bill is : %.4f",bill);
return 0;    
}