/* Enrollment no- 92500527148*/
/*1. Create an array of size 10, input values and print the array, and search an element in the array.*/


#include <stdio.h>

void main()
{
    int a[10], i, search, flag = 0;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nArray Elements are:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n\nEnter the element to search: ");
    scanf("%d", &search);

    for(i = 0; i < 10; i++)
    {
        if(a[i] == search)
        {
            flag = 1;
            printf("\nElement %d found at position %d.", search, i + 1);
            break;
        }
    }

    if(flag == 0)
    {
        printf("\nElement not found.");
    }
}
