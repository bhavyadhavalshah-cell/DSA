#include<stdio.h>
int main()
{
    int a=10,b=10;
    int *p = &a;
    int *q = &b;
    int sum = 0;
    sum = *p + *q;
    printf("%d",sum);
    return 0;
}