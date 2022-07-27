#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int min;

void delay()
{
    long n;
    for (n = 0; n < 10; n++)
    {
        int a = 10 / 10;
    }
}
void selectionsort(int arr[], int length)
{
    int i, j;
    for (i = 0; i < length - 1; i++)
    {
        min = i;
        for (j = i + 1; j < length; j++)
        {
            if (arr[j] > arr[min])
            {
                min = j;
                delay();
            }
        }
        {
        }
    }
}
int main()
{
    int arr[15000], n = 1000, i;
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
    double start, end;
    while (n <= 10000)
    {
        for (i = 0; i < n; i++)
        {
            arr[i] = i;
        }
        start = clock();
        selectionsort(arr, n);
        end = clock();
        printf("n=%d time= %f \n", n, (end - start) / CLOCKS_PER_SEC);
        n = n + 1000;
    }
    return 0;
}
