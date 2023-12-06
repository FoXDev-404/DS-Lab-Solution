// Write a program to implement Linear Search.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10] = {47, 12, 56, 89, 45, 67, 23, 90, 43, 88};
    int n, pos = 0;
    printf("\n====================================\n");
    printf("            Linear Search             ");
    printf("\n====================================\n");
    printf("\nRajpal Nishad Roll No. 2200950100066\n");
    printf("\nArray elements are : ");
    for (int x = 0; x < 10; x++)
    {
        printf("%d ", a[x]);
    }
    printf("\nEnter the element to be searched : ");
    scanf("%d", &n);
    for (int x = 0; x < 10; x++)
    {
        if (a[x] == n)
        {
            pos = x + 1;
            break;
        }
    }
    if (pos != 0)
    {
        printf("\nElement found at position %d", pos);
    }
    else
    {
        printf("\nElement not found");
    }
    return 0;
}
