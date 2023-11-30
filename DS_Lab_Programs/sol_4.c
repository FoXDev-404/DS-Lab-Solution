// Write a program to implement Queue using Linked List.
// Name : Rajpal Nishad, Roll No. 2200950100066, ST-CS(B).
// Date : 30/1/2023.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct queue
{
    int data;
    struct queue *next;
};
struct queue *front = NULL, *rear = NULL;

void enqueue()
{
    char ch = 'y';
    printf("\n-------------------------------------\n");
    do
    {
        struct queue *newQueue = (struct queue *)malloc(sizeof(struct queue));
        newQueue->next = NULL;
        printf("\nEnter the data: ");
        scanf("%d", &newQueue->data);
        if (front == NULL)
        {
            front = newQueue;
            rear = newQueue;
        }
        else
        {
            rear->next = newQueue;
            rear = newQueue;
        }
        printf("\nData inserted successfully.");
        printf("\nDo you want to insert more data? (y/n): ");
        ch = getch();
        printf("%c", ch);
    } while (ch == 'y' || ch == 'Y');
}

void dequeue()
{
    char ch = 'y';
    printf("\n-------------------------------------\n");
    do
    {
        struct queue *temp = front;
        if (front == NULL && rear == NULL)
        {
            printf("\nQueue is empty.");
            break;
        }
        else if (front->next == NULL)
        {
            printf("\nDequeued data is: %d", front->data);
            front = NULL;
            rear = NULL;
        }
        else
        {
            printf("\nDequeued data is: %d", front->data);
            front = front->next;
        }
        printf("\nDo you want to dequeue more data? (y/n): ");
        ch = getch();
        printf("%c", ch);
    } while (ch == 'y' || ch == 'Y');
}

void display()
{
    struct queue *d = front;
    printf("\n-------------------------------------\n");
    if (d == NULL)
    {
        printf("\nQueue is empty.");
    }
    else
    {
        printf("\nQueue is: ");
        while (d != NULL)
        {
            printf("%d ", d->data);
            d = d->next;
        }
    }
}

int main()
{
    int choice, x = 1;
    printf("\n=====================================\n");
    printf("Rajpal Nishad, Roll No. 2200950100066");
    printf("\n=====================================\n");
    printf("      Queue using Linked List");
    do
    {
        printf("\n-------------------------------------\n");
        printf("\n1. Enqueue \n2. Dequeue \n3. Display \n4. Exit");
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
            printf("\nInvalid choice.");
            break;
        }
    } while (x);
    printf("\n-------------------------------------\n");
    printf("             Thank You!            ");
    printf("\n-------------------------------------\n");
    return 0;
}