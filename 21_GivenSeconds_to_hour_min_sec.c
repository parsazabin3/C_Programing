#include<stdio.h>
int main(){
    int x,h,m,s;
printf("total seconds inserted by user:\n");
    scanf("%d",&x);
    h=x/3600;
    m=(x%3600)/60;
    s=x%60;
    printf("so %d seconds in hour,minute and second is :%d,%d,%d",x,h,m,s);

   return 0; 
}