/*5. Write a program to find the power of a given number using stack.
Enrollment no- 92500527148 */


#include<stdio.h>
#define MAX 100
int stack[MAX],top=-1;
void push(int value);
int pop();

void main()
{
int base,power,i;
int result=1;




printf("\n enter base value:");
scanf("%d",&base);



printf("\n enter power value:");
scanf("%d",&power);

for(i=1;i<=power;i++)
{
    push(base);
}

 while(top != -1)
    {
        result = result * pop();
    }

    printf("\n Power = %d ^ %d = %d",base,power, result);
}

void push(int value)
{
    if(top == MAX - 1)
        printf("\n Stack overflow");
    else
        stack[++top] = value;
}

int pop()
{
    if(top == -1)
    {
        printf("\n Stack Underflow");

    }
    else
    {
        return stack[top--];
    }
}
