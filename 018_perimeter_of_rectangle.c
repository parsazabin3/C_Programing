#include<stdio.h>
int main(){
    int l,b,perimeter;

printf("Enter l and b : \n");
    scanf("%d %d",&l,&b);

    perimeter=2*(l+b);
    printf("perimeter of the rectangle : %d ",perimeter);

    return 0;
}