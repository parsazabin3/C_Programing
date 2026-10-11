//Write a C program to check whether a student has passed or failed.
    #include<stdio.h>
int main(){
    int marks;
    printf("Enter obtained marks : \n");
    scanf("%d",&marks);

    if(marks>=40){
        printf("passed");
    }
else{
    printf("failed");
}  
return 0;    
}