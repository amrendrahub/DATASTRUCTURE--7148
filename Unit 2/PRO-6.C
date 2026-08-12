/* Enrollment no- 92500527148 */
/* 6. Write a program to find GCD of two numbers using stack. */

#include <stdio.h>

#define MAX 10

int stack[MAX];
int top = -1;

int num1, num2, a, b, temp;

void push(int value);
int pop();

int main()
{
    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    push(num1);
    push(num2);

    b = pop();
    a = pop();

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD = %d\n", a);


}

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = value;
    }
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
