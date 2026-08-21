#include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1;
int rear = -1;
void enQueue(int data)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is full...");
    }
    else
    {
        rear++;
        queue[rear] = data;
        if (front == -1)
        {
            front = 0;
        }
    }
}
void deQueue()
{
    if (rear == -1 && front == -1)
    {
        printf("\nQueue Empty...");
    }
    else if (rear == front)
    {
        rear = -1;
        front = -1;
    }
    else
    {
        printf("\n%d removed... ", queue[front]);
        front++;
    }
}
void display()
{
    if (rear == -1 && front == -1)
    {
        printf("\nQueue Empty...");
    }
    else
    {
        printf("\nQueue : ");
        for (int i = front; i <= rear; i++)
        {
            printf(" %d", queue[i]);
        }
    }
}
int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);
    display();
    deQueue();
    enQueue(40);
    display();
    deQueue();
    return 0;
}