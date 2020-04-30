#include<stdio.h>
 main(){
     int n,v,R,B=0,i=1;
     printf("Enter decimal number:");
     scanf("%d",&n);
     v=n;
     while(n!=0)
     {
         R=n%2;
         n=n/2;
         B=B+(R*i);
         i=i*10;
     }
printf("Binary: %d",B);
 }
