#include<stdio.h>
int main(){
    int basic,hra,da,gross;
    printf("Enter basic salary = \n");
    scanf("%d",&basic);

    hra=basic*20/100;
    da=basic*80/100;
    gross=basic+hra+da;

    printf("So gross salary is = %d",gross);
    
    
    return 0; 
}