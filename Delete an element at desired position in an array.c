
#include <stdio.h>

 main()
{
    int n,i,pos;

    printf("Enter size of the array : ");
    scanf("%d",&n);
    int A[n];
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the element position to delete : ");
    scanf("%d", &pos);

        for(i=pos-1; i<n-1; i++)
        {
            A[i] = A[i + 1];
        }

        n--;

    printf("Elements of array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }

}
