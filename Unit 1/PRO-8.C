/* Enrollment No. - 92500527148 */
/* 8.Sort the array into ascending order. */

#include <stdio.h>

void main()
{
    int a[5], i, n, j, temp;

    printf("Enter Limit: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Array in Ascending Order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
