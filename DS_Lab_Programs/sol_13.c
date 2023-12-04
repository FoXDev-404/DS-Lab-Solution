// Write a program to implement Dequeue in C.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 5

int dequeue[MAX], front = -1, rear = -1;

void insert_rear()
{
    int item;
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else
    {
        printf("Enter the element to be inserted: ");
        scanf("%d", &item);
        if (front == -1)
        {
            front = 0;
            rear = 0;
            dequeue[rear] = item;
        }
        else
        {
            rear = rear + 1;
            dequeue[rear] = item;
        }
    }
}

void delete_rear()
{
    int item;
    if (front == -1)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        if (rear == front)
        {
            item = dequeue[rear];
            rear = -1;
            front = -1;
            printf("The deleted element is %d\n", item);
        }
        else
        {
            item = dequeue[rear];
            rear = rear - 1;
            printf("The deleted element is %dn", item);
        }
    }
}

void insert_front()
{
    int item;
    if (front == 0)
        printf("\nYour queue is full from front\n");

    else
    {
        printf("Enter the element to be inserted: ");
        scanf("%d", &item);
        front = front - 1;
        dequeue[front] = item;
    }
}

void delete_front()
{
    int item;
    if (front == -1)
        printf("Queue Underflow\n");
    else
    {
        if (front == rear)
        {
            item = dequeue[front];
            front = -1;
            rear = -1;
            printf("The deleted element is %d\n", item);
        }
        else
        {
            item = dequeue[front];
            front = front + 1;
            printf("The deleted element is %d\n", item);
        }
    }
}

void display()
{
    int i;
    for (i = front; i <= rear; i++)
    {
        printf("%d\n", dequeue[i]);
    }
}

void main()
{
    int choice;
    char ch;
    do
    {
        printf("\nChoose the operation to be performed\n");
        printf("1. Insert from rear\n");
        printf("2. Delete from rear\n");
        printf("3. Insert from front\n");
        printf("4. Delete from front\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert_rear();
            break;
        case 2:
            delete_rear();
            break;
        case 3:
            insert_front();
            break;
        case 4:
            delete_front();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
        }
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
    getch();
}