// Write a program to implement Bubble Sort in C.

#include <stdio.h>
#include <stdlib.h>

void display(int a[], int n)
{
    for (int x = 0; x < n; x++)
    {
        printf("%d ", a[x]);
    }
}

int main()
{
    int a[10], n, temp = 0;
    printf("\n====================================\n");
    printf("            Bubble Sort             ");
    printf("\n====================================\n");
    printf("Rajpal Nishad Roll No. 2200950100066\n");
    printf("\nEnter the number of elements : ");
    scanf("%d", &n);
    printf("\nEnter the elements : ");
    for (int x = 0; x < n; x++)
    {
        scanf("%d", &a[x]);
    }
    printf("\nUnsorted Array : ");
    display(a, n);
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n - x - 1; y++)
        {
            if (a[y] > a[y + 1])
            {
                temp = a[y];
                a[y] = a[y + 1];
                a[y + 1] = temp;
            }
        }
    }
    printf("\nSorted Array : ");
    display(a, n);
    printf("\n");
}