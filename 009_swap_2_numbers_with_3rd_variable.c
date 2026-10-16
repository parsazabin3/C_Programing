#include<stdio.h>
int main(){
 int a,b,temp;


 printf("enter 1st num: \n");
 scanf("%d",&a);

 printf("enter 2nd num: \n");
 scanf("%d",&b);

 temp=a;
 a=b;
 b=temp;

 printf("after swapping : a=%d and b=%d",a,b);
 return 0;


}