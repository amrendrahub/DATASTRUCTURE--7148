/*9. Write a program which performs the following operations using a
simple queue. : insert() -> delete() -> display() 
 Enrollment no- 92500527148 */

#include <stdio.h>
#define MAX 5

int queue[MAX];
int front=-1,rear=-1;

void insert();
void delete_element();
void display();

void main()
{
    int op;
    do
    {
        printf("\n 1. insert");
        printf("\n 2. delete");
        printf("\n 3. display");
        printf("\n 4. exit");

        printf("\n Enter your choice :");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
                 insert();
                 break;

            case 2:
                 delete_element();
                 break;
           case 3:
                 display();
                 break;
           default:
            printf("\n Invalid Option");

        }
    } while(op!=4);
}

void insert ()
{
    int num;
    printf("\n Enter number : ");
    scanf("%d",&num);

    if (rear==MAX-1)
    {
        printf("\n Queue is overflow..");
        return;

    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;

    }
    else
        {
            rear++;
        }
    queue[rear]=num;
}

void delete_element ()
{
    int val;
    if(front==-1 || front>rear)


    {
        printf("\n Queue is overflow..");
        return;

    }
    else
    {
        val=queue[front];
        printf("\n Delete Value is : %d",val);
        if(front==rear)
        {
            front=rear=-1;
            return;

        }
        front++;
    }
}

 void display()
 {
     int i;
     if(front==-1 || front>rear)
     {
         printf("\n Queue is Empty..");
        return;

     }
     else
        {
           for(i=front;i<=rear;i++)
           {
               printf("\t%d",queue[i]);
           }
        }
 }
