#include<stdio.h>
int main(){
    int a,b,c;
    
    printf("Enter the sides of a triangle : \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c && c==a){
        printf("It is an equilateral triangle");
    }
else if(a!=b && b!=c && c!=a){
     printf("It is an scalene triangle");
}
else{
     printf("It is an isosceles triangle");
}
    
    return 0;
}
       