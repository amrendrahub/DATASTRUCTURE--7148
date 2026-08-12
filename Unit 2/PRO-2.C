/* Enrollment no- 92500527148*/

/*2. Write a program to find out the factorial of a number using recursion
(stack).*/

#include<stdio.h>
int factorial (int n);
void main()
{
int n,z;
printf("\n enter value:");
scanf("%d",&n);

z=factorial(n);

printf("\n factorial is:%d",z);


}
int factorial (int n)
{
int f;
if(n==1)
return 1;
else
f=n*factorial(n-1);
return f;

}
