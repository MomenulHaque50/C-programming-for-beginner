#include<stdio.h>
#define pi 3.1416
main(){
    float r,h,s;
    float A,V;
  printf("Enter the value of r,h and s:");
    scanf("%f%f%f",&r,&h,&s);
    A=(pi*r*s)+(pi*r*r);
    V=(1*pi*r*r*h)/3;
    printf("Surface Area of a cone:%f\n",A);
    printf("Volume of a cone:%f",V);
}


