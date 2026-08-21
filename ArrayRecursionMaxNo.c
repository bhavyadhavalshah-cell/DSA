#include<stdio.h>
#define SIZE 5
int arr[SIZE] = {10,15,35,50,5};
int arrMax(int i);
int main()
{
    printf("\nThe Maximum Number in the array is %d",arrMax(0));
    return 0;
} 
int arrMax(int i)
{
    int max;
    if(i == SIZE - 1)
    {
        return arr[i];
    }
    max = arrMax(i + 1);
    if(arr[i] > max)
    {
        return arr[i];
    }
    else
    {
        return max;
    }
}