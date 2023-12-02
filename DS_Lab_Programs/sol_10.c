// Write a program to implement Quick Sort in C.
// Author: Rajpal Nishad, Roll No. 2200950100066

#include <stdio.h>
#include <stdlib.h>

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp = 0;
    do
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int *arr, int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

int main()
{
    int a[10], n;
    printf("\n=====================================\n");
    printf("\n============= QUICK SORT ============\n");
    printf("\n=====================================\n");
    printf("Rajpal Nishad, Roll No. 2200950100066");
    printf("\n-------------------------------------\n");
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nArray before sorting: ");
    display(a, n);
    quickSort(a, 0, n - 1);
    printf("\nArray after sorting: ");
    display(a, n);
    printf("\n-------------------------------------\n");
    return 0;
}