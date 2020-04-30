#include<stdio.h>
int sum(int k);
int main(){
    int n,v;
    scanf("%d",&n);
    v=sum(n);
    printf("%d",v);
    return 0;
}
int sum(int k){
    if(k!=0)
    {
        return (k%10+sum(k/10));
    }

  return ;
}

