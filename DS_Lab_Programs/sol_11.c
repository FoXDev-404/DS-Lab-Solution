// Write a program to implement Multiplication of 2D array in C.
// Author: Rajpal Nishad, Roll No. 2200950100066

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2, i, j, k;
    printf("\n=====================================\n");
    printf("\n==== MULTIPLICATION  OF 2D ARRAY ====\n");
    printf("\n=====================================\n");
    printf("Rajpal Nishad, Roll No. 2200950100066");
    printf("\n-------------------------------------\n");
    printf("\nEnter the number of rows and columns of first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("\nEnter the number of rows and columns of second matrix: ");
    scanf("%d%d", &r2, &c2);
    if (c1 != r2)
    {
        printf("\nMultiplication is not possible.");
        exit(0);
    }
    printf("\nEnter the elements of first matrix: \n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    printf("\nEnter the elements of second matrix: \n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    printf("\nFirst matrix is: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\nSecond matrix is: \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            c[i][j] = 0;
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            for (k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];
    printf("\nMultiplication of two matrices is: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}