
#include <stdio.h>

 main()
{
    int n,i,pos,num;

    printf("Enter size of the array : ");
    scanf("%d",&n);
    int A[n];
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position to insert : ");
    scanf("%d", &pos);

         for(i=n; i>=pos; i--)
        {
            A[i] = A[i-1];
        }

      A[pos-1] = num;
        n++;

        printf("Array elements: ");
        for(i=0; i<n; i++)
        {
            printf("%d ", A[i]);
        }

}

