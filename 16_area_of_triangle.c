#include <stdio.h>
int main(){
    float base, height, area;

printf("Enter base and height : \n");
    scanf("%f %f",&base,&height);

    area=(base*height)/2;
    printf("area of the triangle : %.5f ",area);

    return 0;
}