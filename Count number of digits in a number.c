#include<stdio.h>
main(){
int n,c=0;
scanf("%d",&n);
printf("Digit number:");
while(n!=0)
{
    n=n/10;
    c++;

}
printf("%d",c);
}
