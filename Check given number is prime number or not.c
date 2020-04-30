#include<stdio.h>
 main(){
     int n,i,p=0;
     printf("Enter the number:");
     scanf("%d",&n);
     for(i=2;i<=n/2;i++)
     {
         if(n%i==0)
         {
             p++;
             break;
         }
     }

if(p==0)
{
    printf("Prime number");
}
else  printf("Not Prime number");
 }

