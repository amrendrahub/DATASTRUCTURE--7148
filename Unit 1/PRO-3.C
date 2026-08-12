/* Enrollment No: 92500527148 */
/* 3. Create arrays A, B and C of size 3, perform C = A + B.  */


#include <stdio.h>
void main()
{
    int A[3], B[3], C[3];
    int i;

    printf("Enter 3 elements for Array A:\n");
    for(i = 0; i < 3; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    printf("\nEnter 3 elements for Array B:\n");
    for(i = 0; i < 3; i++)
    {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    for(i = 0; i < 3; i++)
    {
        C[i] = A[i] + B[i];
    }

    printf("\nArray A: ");
    for(i = 0; i < 3; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\nArray B: ");
    for(i = 0; i < 3; i++)
    {
        printf("%d ", B[i]);
    }

    printf("\nArray C (A + B): ");
    for(i = 0; i < 3; i++)
    {
        printf("%d ", C[i]);
    }
}
