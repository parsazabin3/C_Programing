#include<stdio.h>
int main(){
    float salary,tax;
    printf("Enter your salary: \n");
    scanf("%f",&salary);

    if(salary<=30000){
        tax = 0;
    }
    else if(salary<=50000){
        tax = salary*10/100;
    }
    else if(salary<=100000){
        tax = salary*15/100;
    }
    else{
        tax = salary *20/100;
    }
    printf("tax based on salary is %.3f",tax);
    return 0;
}
 