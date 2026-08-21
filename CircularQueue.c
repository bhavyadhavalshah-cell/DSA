#include <stdio.h>
#define SIZE 5
int cq[SIZE];
int front = -1;
int rear = -1;
void enqueue(int value)
{
    if ((front == 0 && rear == SIZE - 1))
    {
        printf("\nQueue is Full");
        return;
    }
    else if (front == -1)
    {
        front = rear = 0;
        cq[rear] = value;
    }
    else if (rear == SIZE - 1 && front != 0)
    {
        rear = 0;
        cq[rear] = value;
    }
    else
    {
        rear++;
        cq[rear] = value;
        if (front == -1)
        {
            front = 0;
        }
    }
}
void dequeue()
{
    if (front == 0 || front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    else
    {
        front++;
    }
}
void display()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("\nElements in Circular Queue are:- ");
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d\t", cq[i]);
        }
    }
    else
    {
        for (int i = front; i < SIZE; i++)
        {
            printf("%d\t", cq[i]);
        }
        for (int i = 0; i <= rear; i++)
        {
            printf("%d\t", cq[i]);
        }
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    dequeue();
    enqueue(40);
    display();
    return 0;
}