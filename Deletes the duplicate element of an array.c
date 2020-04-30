#include <stdio.h>

 main()
{

    int n;
    int i, j, k;
    printf("Enter size of the array : ");
    scanf("%d", &n);
   int A[n];

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(A[i] == A[j])
            {
                for(k=j; k<n; k++)
                {
                    A[k] = A[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    printf("\nArray  is : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }

}
