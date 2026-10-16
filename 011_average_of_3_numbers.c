#include<stdio.h>
int main(){
    float a,b,c,average;

    printf("enter the three numbers:\n");
    scanf("%f %f %f",&a,&b,&c);

    average = (a+b+c)/3;
    printf ("average = %.3f",average);
    return 0;

}