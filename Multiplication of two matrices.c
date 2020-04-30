#include<stdio.h>
main(){
    int m,n,o,p;
    printf("Enter A matrix size:");
    scanf("%d%d",&m,&n);
printf("Enter B matrix size:");
    scanf("%d%d",&o,&p);
    int A[m][n];
    int B[o][p];
    int C[m][p];
    int row,col,i,sum;
    if(n==o){
    printf("Enter the element in matrix A of size %d x %d:\n",m,n);
    for(row=0;row<m;row++)
    {
        for(col=0;col<n;col++)
        {
            scanf("%d",&A[row][col]);
        }
    }
     printf("\nEnter the element in matrix B of size %d x %d:\n",o,p);
    for(row=0;row<o;row++)
    {
        for(col=0;col<p;col++)
        {
            scanf("%d",&B[row][col]);
        }
    }
     for(row=0;row<m;row++)
    {
        for(col=0;col<p;col++)
        {
           sum=0;
           for(i=0;i<n;i++)
           {
               sum=sum+A[row][i]*B[i][col];
           }
           C[row][col]=sum;
        }
    }
    printf("\n Matrix A*B is:\n");
    for(row=0;row<m;row++)
    {
        for(col=0;col<p;col++)
        {
           printf("%d ",C[row][col]);
        }
        printf("\n");
    }
    }
    else printf("Matrix multiple is not possible");
}
