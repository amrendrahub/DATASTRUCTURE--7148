/*Write a program to find Minimum and Maximum numbers from the
given array using Recursion.
 Enrollment no- 92500527148 */

#include<stdio.h>
 void main()
 {
     int arr[100],n,i;
     int min,max;

     printf("Enter the size of array : ");
     scanf("%d",&n);

     printf("Enter %d element : ",n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     min = max = arr[0];

     findMinMax (arr,n,1,&min,&max);

     printf("MInimum = %d\n",min);
     printf("Maximim = %d\n",max);

 }

 findMinMax (int arr[],int n,int index,int*min,int*max)
 {
     if(index==n)
     {
         return;
     }
     if (arr[index]<*min)
     {
         *min=arr[index];
     }
     if (arr[index]>*max)
     {
         *max=arr[index];
     }
     findMinMax (arr,n,index+1,min,max);
 }
