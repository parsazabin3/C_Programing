//25. Write a C program to check whether a number is positive, negative or zero.
#include<stdio.h>
int main(){
    int n=17;
    if (n==0){
        printf("the number is zero");
    }
else if(n>0){
    printf("the number is positive");
}
else{
        printf("the number is negative");
}   
    return 0;
}