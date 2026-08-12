/* Enrollment No. - 92500527148 */
/* 2. Create an array of size 10, input values and display sum and average of all elements in the array.*/


#include<stdio.h>

void main()
{
          int a[20],i,n,sum=0;
          float avg;
          printf("enter the limit:");
          scanf("%d",&n);

          for(i=0;i<n;i++)
          {
              printf("\n Enter the number %d:",i+1);
              scanf("%d",&a[i]);
              sum=sum+a[i];
          }
          avg=(float)sum/n;
          printf("the addition is %d",sum);
          printf("\nthe average is %f",avg);
}
