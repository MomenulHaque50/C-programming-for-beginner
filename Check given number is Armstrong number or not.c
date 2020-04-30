#include<stdio.h>
 main(){
     int n,i=0,sum=0,re,C,num,j;
     printf("Enter the number:");
     scanf("%d",&n);
     C=n;
     while(C!=0)
     {
         C=C/10;
         i++;
     }
      C=n;
       while(C!=0)
       {
           re=C%10;
           num=re;
           for(j=1;j<i;j++)
           {
               re=re*num;
           }
           sum=sum+re;
           C=C/10;
       }
if(n==sum)
{
    printf("Armstrong number");
}
else  printf("Not an Armstrong number");
 }
