#include<stdio.h>
#include<math.h>
main(){
    float a;
    float A;
    printf("Enter the value of side a:");
    scanf("%f",&a);
    A=((pow(3,0.5))*(pow(a,2)))/4;
    printf("Equilateral Triangle Area:%f",A);
}
