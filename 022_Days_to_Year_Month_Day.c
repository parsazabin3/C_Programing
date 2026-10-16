#include<stdio.h>
int main(){
int x,y,m,d;
    printf("The total days are: \n");
    scanf("%d",&x);

    y=x/365;
    m=(x%365)/30;
    d=(x%365)%30;

    printf("The total days %d when converted to year,month and days is  %d years %d months %d days",x,y,m,d);
  
   return 0; 
}