#include<stdio.h>
int fibo(int k);
int main(){
    int n, v,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
      printf("%d ",fibo(i));
    }
    return 0;
}
int fibo(int k){
    if(k==0)
    {
        return 0;
    }
    else if(k==1)
    {
        return 1;
    }
    else return (fibo(k-1)+fibo(k-2));
}

