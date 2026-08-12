


#include<stdio.h>

void main()
{
          int a[50],b[50],c[50],i,j=0,n,m,p;
          printf("enter the limit for A:");
          scanf("%d",&n);
          for(i=0;i<n;i++)
          {
              printf("\n Enter the number %d of A:",i+1);
              scanf("%d",&a[i]);

          }
          printf("enter the limit for B:");
          scanf("%d",&m);
          for(i=0;i<m;i++)
          {
              printf("\n Enter the number %d of B:",i+1);
              scanf("%d",&b[i]);

          }


          printf("\n\nThese are the elements entered for A:");

          for(i=0;i<n;i++)
          {
              printf("\nOn the position %d value is %d ",i+1,a[i]);

          }

           printf("\n\nThese are the elements entered for B:");

          for(i=0;i<m;i++)
          {
              printf("\nOn the position %d value is %d ",i+1,b[i]);

          }
          p=n+m;
           for(i=0;i<n;i++)
          {
              c[j]=a[i];
              j++;

          }
           for(i=0;i<m;i++)
          {
              c[j]=b[i];
              j++;

          }

          printf("\n\nThese are the elements for C:");

         for(i=0;i<p;i++)
          {

              printf("\nOn the position %d value is %d ",i+1,c[i]);

          }



}
