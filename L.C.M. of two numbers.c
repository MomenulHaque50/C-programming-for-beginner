#include<stdio.h>
main(){
    int n1,n2,x,y,lcm,g;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    x=n1;
    y=n2;
    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1=n1-n2;
        }
        else
        {
            n2=n2-n1;
        }
    }
     g=n1;
     lcm=(x*y)/g;
     printf("LCM=%d",lcm);
}
