/* Enrollment no- 92500527148*/
/*4. Write a program to find the factorial of a given integer number using
stack.*/



#include<stdio.h>
#define MAX 30

int stack[MAX],top=-1;
void push(int ch);
int pop();

void main()
{
    int i=0,n,fact=1;
    printf("\n Enter value:");
    scanf("%d",&n);

for(i=1;i<=n;i++)
    {
        push(i);
    }
    while(top!=-1)
    {
      fact=fact*pop();

    }
  printf("\n Factorial is : %d",fact);

}
void push(int value)
{
    if(top==MAX-1)

     {
         printf("\n Stack overflow..");
     }
     else
     {
         top++;
         stack[top]=value;
     }

}
 int pop()
{
    int val;
    if(top==-1)
    {
        printf("\n Stack is Underflow..");
        return-1;
    }
    else
    {
        val=stack[top];
        top--;
        return val;

    }
}
