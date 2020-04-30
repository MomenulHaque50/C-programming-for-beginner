#include<stdio.h>
main(){
int n,R,sum=0;
scanf("%d",&n);
printf("Reverse number:");
while(n!=0)
{
    sum=sum*10;
    R=n%10;
    sum=sum+R;
    n=n/10;
}
printf("%d",sum);
}
