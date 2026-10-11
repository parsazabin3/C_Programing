#include<stdio.h>
int main(){
    int physics,math,english;
    printf("The marks obtained in Physics,Math and English is : ");
    scanf("%d %d %d",&physics,&math,&english);

    if((physics>=80) && (math>=85) && (english>=80)){
        printf("Eligible to get admitted");
    }
    else{
        printf("Not Eligible to get admitted");
    }
    return 0;
}