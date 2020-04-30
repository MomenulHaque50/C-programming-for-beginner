#include<stdio.h>
main(){
int n,i,fact=1;
scanf("%d",&n);
printf("Factorial:");
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d",fact);
}

