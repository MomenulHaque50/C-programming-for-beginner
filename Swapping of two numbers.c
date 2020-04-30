#include<stdio.h>
main(){
int a,b,c;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d\n%d",a,b);

}
