#include<stdio.h>
main(){
int n,R,sum=0;
scanf("%d",&n);
printf("Digit sum:");
while(n!=0)
{
    R=n%10;
    sum=sum+R;
    n=n/10;

}
printf("%d",sum);
}

