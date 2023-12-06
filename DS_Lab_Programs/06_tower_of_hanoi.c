// Write a program to implement Tower of Hanoi using recursion in C.
// Author: Rajpal Nishad, Roll No. 2200950100066

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    printf("\n====================================\n");
    printf("Rajpal Nishad, Roll No. 220950100066");
    printf("\n====================================\n");
    printf("          Tower of Hanoi");
    printf("\n====================================\n");
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'C', 'B');
    // print how many moves are required
    printf("\n\n===================================\n");
    printf("Total number of moves required: %d", (int)(pow(2, n) - 1));

    printf("\n=========-- Thank You! --==========\n");
    return 0;
}