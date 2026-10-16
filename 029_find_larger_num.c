#include<stdio.h>
int main(){
  int n1,n2;
    printf("Enter 2 numbers :\n");
    scanf("%d %d",&n1 ,&n2);

    if(n1>n2){
        printf("%d is greater",n1);
    }
   else if(n2>n1) {
       printf("%d is greater",n2);
   }
else {
    ("%d is equal to %d",n1,n2);
}
return 0;    
}