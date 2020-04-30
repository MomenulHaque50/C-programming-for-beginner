#include<stdio.h>
main(){
int n,R,i=0,j,C,D;
scanf("%d",&n);

printf("Split Digit:");
C=n;
  while(C!=0)
     {
         C=C/10;
         i++;
     }
     int A[i];
     C=n;
     D=i;
while(n!=0)
{
    R=n%10;
    A[i-1]=R;
    n=n/10;
    i--;

}
for(j=0;j<D;j++)
{
    printf("\n%d\n",A[j]);
}

}

