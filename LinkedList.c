#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *last = NULL;
void addNode(int num)
{
    if (head == NULL)
    {
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
    struct node *p = head;
    printf("\nLinkedList : ");
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
void addNodeBeg(int num)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = num;
    tmp->next = head;
    head = tmp;
}
int countNode()
{
    int count = 0;
    struct node *p = head;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}
int countOdd()
{
    int count = 0;
    struct node *p = head;
    while (p != NULL)
    {
        if (p->data % 2 != 0)
        {
            count++;
        }
        p = p->next;
    }
    return count;
}
int countEven()
{
    int count = 0;
    struct node *p = head;
    while (p != NULL)
    {
        if (p->data % 2 == 0)
        {
            count++;
        }
        p = p->next;
    }
    return count;
}
int search(int data)
{
    struct node *p = head;
    int found = 0;
    while (p != NULL)
    {
        if (p->data == data)
        {
            found = 1;
            break;
        }
        p = p->next;
    }
    if (found == 0)
    {
        printf("\n%d not found", data);
    }
    else
    {
        printf("\n%d Found", data);
    }
    return found;
}
void delBeg()
{
    if (head == NULL)
    {
        return;
    }
    struct node *p = head;
    head = head->next;
    free(p);
    if (head == NULL)
    {
        last = NULL;
    }
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
    printf("\nlength = %d", countNode());
    printf("\nOdd nodes = %d", countOdd());
    printf("\nEven nodes = %d", countEven());
    search(100);
    search(30);
    delBeg();
    display();
    return 0;
}