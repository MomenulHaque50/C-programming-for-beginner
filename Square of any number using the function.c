#include<stdio.h>
int findsqr(int a);
int main()
{
int n,R;
printf("Input any number for square : ");
scanf("%d",&n);
 R = findsqr(n);
printf("The square is : %d ",R);
return 0;
}
int findsqr(int a)
{
int s;
s = a*a;
return s;
}
