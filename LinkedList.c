#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *last = NULL;

void addNode(int num) // 30
{
    if (head == NULL)
    {
        // first insertion
        head = (struct node *)malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        last = head;
    }
    else
    {
        struct node *tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void display()
{

    struct node *p;
    printf("\nLinkedList : ");

    p = head;

    while (p != NULL)
    {
        printf(" %d ", p->data); // 10 20 30 40
        p = p->next;
    }
}

void addNodeBeg(int num){
    struct node *tmp = (struct node*)malloc(sizeof(struct node));

    tmp->data= num; 
    tmp->next = head; 
    head = tmp; 
}

int main()
{

    addNode(10);
    addNode(20);
    addNode(30);
    display(); 
    addNode(40);
    display();
    
    addNodeBeg(15);
    display(); 
    return 0;
}