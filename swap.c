#include<stdio.h>
int swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a=10,b=20;
    printf("Before Swap : %d %d",a,b);
    swap(&a,&b);
    printf("\nAfter Swap : %d %d",a,b);
}