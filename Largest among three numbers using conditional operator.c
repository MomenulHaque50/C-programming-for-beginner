#include<stdio.h>
main(){
int a,b,c,t,t1;
printf("Enter all numbers:");
scanf("%d%d%d",&a,&b,&c);
t1=(a>b?a:b);
t=(c>t1?c:t1);
printf("Largest number:%d",t);
}

