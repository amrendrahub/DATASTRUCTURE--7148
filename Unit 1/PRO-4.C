/* Enrollment No: 92500527148 */
/* 4. Create arrays A, B of size 3, C of size 6, merge A and B into C. */


#include <stdio.h>

void  main()
{
    int A[3], B[3], C[6];
    int i;

    printf("Enter 3 elements for A:\n");
    for(i = 0; i < 3; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    printf("\nEnter 3 elements for B:\n");
    for(i = 0; i < 3; i++)
    {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    for(i = 0; i < 3; i++)
    {
        C[i] = A[i];
    }

    for(i = 0; i < 3; i++)
    {
        C[i + 3] = B[i];
    }

    printf("\n A: ");
    for(i = 0; i < 3; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n B: ");
    for(i = 0; i < 3; i++)
    {
        printf("%d ", B[i]);
    }

    printf("\nMerged Array C: ");
    for(i = 0; i < 6; i++)
    {
        printf("%d ", C[i]);
    }
}
