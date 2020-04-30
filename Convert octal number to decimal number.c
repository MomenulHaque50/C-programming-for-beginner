#include<stdio.h>
 main(){
     int n,v,R,D=0,i=0;
     printf("Enter octal number:");
     scanf("%d",&n);
     v=n;
     while(n!=0)
     {
         D=D+(n%10)*pow(8,i++);
         n=n/10;
     }
printf("Decimal number: %d",D);
 }
