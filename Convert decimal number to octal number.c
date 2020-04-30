#include<stdio.h>
 main(){
     int n,v,R,O=0,i=1;
     printf("Enter decimal number:");
     scanf("%d",&n);
     v=n;
     while(n!=0)
     {
         R=n%8;
         n=n/8;
         O=O+(R*i);
         i=i*10;
     }
printf("Octal number: %d",O);
 }
