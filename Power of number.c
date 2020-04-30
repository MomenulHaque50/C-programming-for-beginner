#include<stdio.h>
main(){
int n,r,sum=0,i,p,c;
printf("Enter  the number and power:");
scanf("%d%d",&n,&r);
c=n;
printf("Power:");
 for(i=1;i<r;i++)
           {
               n=n*c;
           }
printf("%d",n);
}

