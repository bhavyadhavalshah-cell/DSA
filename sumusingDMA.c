#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *k,sum=0;
    k = (int *)malloc(5 * sizeof(int));
    printf("Enter 2 numbers: ");
    scanf("%d %d", &k[0], &k[1]);
    sum = k[0] + k[1];
    printf("Sum: %d", sum);
    free(k);
    return 0;
}