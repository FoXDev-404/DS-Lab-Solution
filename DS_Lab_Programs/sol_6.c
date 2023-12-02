// Write a program to implement Tower of Hanoi using recursion.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int opCount = 0;

void TOH(int n, char a, char b, char c)
{
    if (n > 0)
    {
        TOH(n - 1, a, c, b);
        printf("\n %d : %c -> %c", n, a, c);
        opCount++;
        TOH(n - 1, b, a, c);
    }
}

int main()
{
    int n;
    printf("\n====================================\n");
    printf("         Tower of Hanoi");
    printf("\nEnter the number of disks : ");
    scanf("%d", &n);
    printf("\n====================================\n");
    printf("DISK : OPERATION\n");
    TOH(n, 'A', 'B', 'C');
    printf("\n  %d Operation(s) Performed\n", opCount);
    return 0;
}