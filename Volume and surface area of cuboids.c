#include<stdio.h>
#include<math.h>
main(){
    float x,y,z;
    float A,V;
    printf("Enter the value of three sides of length:");
    scanf("%f%f%f",&x,&y,&z);
    A=(2*x*y)+(2*x*z)+(2*y*z);
    V=x*y*z;
    printf("Surface Area of a cuboid:%f\n",A);
    printf("Volume of a cuboid:%f",V);
}

