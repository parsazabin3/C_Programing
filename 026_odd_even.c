//26. Write a C program to check whether a number is  even or odd.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);

    if(n%2==0){
        printf("the number is even");
    }
else{
    printf("the number is odd");
}
    
    return 0;
}