#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top = -1;
void PUSH(int data)
{  
    if(top == -1)
    {
        printf("Empty Stack...");
    }
    stack[top+1] = data;    
    top++;
}
void POP()
{
    
    if(top == -1)
    {
        printf("Empty Stack...");
    }
    else
    {
        top--;
    }
}
void display()
{
    int i;
    for(i=top;i<=0;i--)
    {
        printf("\nStack : %d",stack[i]);
    }
}
int main()
{
    PUSH(10);
    PUSH(20);
    PUSH(30);
    display();
    POP();
    display();
    return 0;
}