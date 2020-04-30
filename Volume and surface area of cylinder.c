#include<stdio.h>
#define pi 3.1416
main(){
    float r,h;
    float A,V;
   printf("Enter the value of r and h:");
    scanf("%f%f",&r,&h);
    A=(2*pi*r*h)+(2*pi*r*r);
    V=pi*r*r*h;
    printf("Surface Area of a cylinder:%f\n",A);
    printf("Volume of a cylinder:%f",V);
}

