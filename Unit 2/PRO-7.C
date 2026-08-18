/*7. Write a program to find the Smallest Common Divisor of a given
number.
Enrollment no- 92500527148 */

#include <stdio.h>
#define MAX 100
int stack[MAX];
int top = -1;

int num;
void push(int value);
int pop();

int main()
{
 int i, divisor;

    printf("Enter number: ");
    scanf("%d", &num);



    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            push(i);
            printf("Smallest Common Divisor = %d\n", i);
            break;
        }
    }

}

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
        stack[++top] = value;

}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}
