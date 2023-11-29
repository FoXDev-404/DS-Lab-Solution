// Write a program to implement Queue using array.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 10

struct queue
{
    int data[MAX];
    int front;
    int rear;
} q;

void enqueue()
{
    char ch = 'y';
    printf("\n-----------------------------------\n");
    do
    {
        if (q.front == 0 && q.rear == MAX - 1)
        {
            printf("\nQueue is full\n");
            break;
        }
        else
        {
            q.rear++;
            printf("\nEnter the element: ");
            scanf("%d", &q.data[q.rear]);
        }
        printf("\nDo you want to add more elements? (y/n): ");
        ch = getch();
        printf("%c", ch);
    } while (ch == 'y' || ch == 'Y');
}

void dequeue()
{
    char ch = 'y';
    printf("\n-----------------------------------\n");
    do
    {
        if (q.front == -1 && q.rear == -1)
        {
            printf("\nQueue is empty\n");
            break;
        }
        else
        {
            printf("\nDeleted element is %d\n", q.data[q.front]);
            for (int i = q.front; i < q.rear; i++)
            {
                q.data[i] = q.data[i + 1];
            }
            q.rear--;
        }
        printf("\nDo you want to delete more elements? (y/n): ");
        ch = getch();
        printf("%c", ch);
    } while (ch == 'y' || ch == 'Y');
}

void display()
{
    printf("\n-----------------------------------\n");
    if (q.front > q.rear)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        printf("\nQueue is: ");
        for (int i = q.front; i <= q.rear; i++)
        {
            printf("%d ", q.data[i]);
        }
        printf("<--Rear\n");
    }
}

int main()
{
    printf("\n===================================\n");
    printf("Rajpal Nishad Roll No-2200950100066");
    int choice, size, x = 1;
    q.front = 0;
    q.rear = -1;
    printf("\n===================================\n");
    printf("       Queue Operations");
    do
    {
        printf("\n-----------------------------------\n");
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
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
            printf("\nInvalid choice\n");
            break;
        }
    } while (x);
    printf("\n===================================\n");
    return 0;
}