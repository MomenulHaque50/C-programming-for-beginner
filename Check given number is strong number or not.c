#include<stdio.h>
main(){
 int n,sum=0,j,fact,i,C;
 scanf("%d",&n);
 C=n;
 while(n!=0)
 {   fact=1,i=1;
     j=n%10;
     for(i=1;i<=j;i++)
     {
         fact=fact*i;
     }
     sum=sum+fact;
     n=n/10;
 }
 if(C==sum)
 {
     printf("Strong Number");
 }
 else printf("Not a Strong Number");
}
