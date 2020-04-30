#include<stdio.h>
main(){
    float a,b,h;
    float A;
    printf("Enter the value of upper side a:");
    scanf("%f",&a);
    printf("Enter the value of lower side b:");
    scanf("%f",&b);
    printf("Enter the value of hight h:");
    scanf("%f",&h);
      A=((a+b)*h)/2;
    printf("Area of trapezium: %f",A);
}

