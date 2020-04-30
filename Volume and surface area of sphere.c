#include<stdio.h>
#define pi 3.1416
main(){
    float r;
    float A,V;
     printf("Enter the value of r:");
    scanf("%f",&r);
    A=4*pi*r*r;
    V=(4*pi*r*r*r)/3;
    printf("Surface Area of a sphere:%f\n",A);
    printf("Volume of a sphere:%f",V);
}

