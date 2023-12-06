// Write a program to implement Circular Queue using Array.
// Name : Rajpal Nishad, Roll No. 2200950100066, ST-CS(B).

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 10

struct queue
{
    int data[MAX];
    int front, rear, count;
} q;

void enqueue()
{
    char ch = 'y';
    printf("\n-------------------------------------\n");
    do
    {
        if (q.count == MAX)
        {
            printf("\nQueue is full.");
            break;
        }
        else
        {
            printf("\nEnter the data: ");
            scanf("%d", &q.data[q.rear]);
            q.rear = (q.rear + 1) % MAX;
            q.count++;
        }
        printf("\nDo you want to add more data (y/n): ");
        ch = getche();
    } while (ch == 'y' || ch == 'Y');
}

void dequeue()
{
    char ch = 'y';
    printf("\n-------------------------------------\n");
    do
    {
        if (q.count == 0)
        {
            printf("\nQueue is empty.");
            break;
        }
        else
        {
            printf("\n%d is deleted.", q.data[q.front]);
            q.front = (q.front + 1) % MAX;
            q.count--;
        }
        printf("\nDo you want to delete more data (y/n): ");
        ch = getche();
        printf("%c", ch);
    } while (ch == 'y' || ch == 'Y');
}

void display()
{
    printf("\n-------------------------------------\n");
    if (q.count == 0)
        printf("\nQueue is empty.");
    else
    {
        int i = q.front;
        printf("\nFront -> ");
        while (i != q.rear)
        {
            printf("%d -> ", q.data[i]);
            i = (i + 1) % MAX;
        }
        printf("<- Rear");
    }
}

int main()
{
    printf("\n=====================================\n");
    printf("Rajpal Nishad, Roll No. 2200950100066");
    int c, size, x = 1;
    q.front = 0, q.rear = 0, q.count = 0;
    printf("\n=====================================\n");
    printf("     Circular Queue using Array");
    do
    {
        printf("\n-------------------------------------\n");
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            x = 0;
            break;
        default:
            printf("\nInvalid choice.");
            break;
        }
    } while (x);
    printf("\n=====================================\n");
    printf("              Thank You!");
    printf("\n=====================================\n");
    return 0;
}