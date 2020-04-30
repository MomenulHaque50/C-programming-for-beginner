#include<stdio.h>
 main(){
     int n,v,R,D=0,i=0,B=0;
     printf("Enter octal number:");
     scanf("%d",&n);
     v=n;
     while(n!=0)
     {
         D=D+(n%10)*pow(8,i++);
         n=n/10;
     }

 i=1;
   while(D!=0)
     {
         R=D%2;
         D=D/2;
         B=B+(R*i);
         i=i*10;
     }
printf("Binary number: %d",B);
 }
