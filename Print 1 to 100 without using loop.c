#include<stdio.h>
int printnum(int k);
int main(){

int n=100;
printnum(n);
return 0;
}
int printnum(int k){
    if(k>=1)
    {
        printnum(k-1);
        printf("%d ",k);
    }
        return ;
    }


