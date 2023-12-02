// Write a program to implement Selection Sort in C.

#include <stdio.h>
#include <stdlib.h>

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int a[10], n, min, temp = 0;
    printf("\n=====================================\n");
    printf("\n========== SELECTION  SORT ==========\n");
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
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i; j < n; j++)
            if (a[j] < a[min])
                min = j;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("\nArray after sorting: ");
    display(a, n);
    printf("\n-------------------------------------\n");
    return 0;
}