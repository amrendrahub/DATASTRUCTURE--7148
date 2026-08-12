/* Enrollment No: 92500527148 */
/* 7. Delete an element from the array from user defined position.*/


#include<stdio.h>

void main()
{
    int a[20],i,pos,n;
    printf("Enter the limit:");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("Enter the value %d:",i+1);
        scanf("%d",&a[i]);

    }

    printf("Enter the position to delete value");
    scanf("%d",&pos);
    pos=pos-1;

    if (pos<1 || pos>n)
            {
               printf("\nPosition must be between 0 and %d.",n);
            }
    else
    {
    for(i=pos;i>=n;i++)
    {
         a[i]=a[i+1];
    }
    }


    for(i=0;i<n-1;i++)
          {

              printf("\nOn the position %d value is %d ",i+1,a[i]);

          }
    }
