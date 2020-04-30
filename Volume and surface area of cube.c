#include<stdio.h>
#include<math.h>
main(){
    float s;
    float A,V;
    printf("Enter the value of sides of length:");
    scanf("%f",&s);
    A=6*(pow(s,2));
    V=(pow(s,3));
    printf("Surface Area of a cube:%f\n",A);
    printf("Volume of a cube:%f",V);
}

