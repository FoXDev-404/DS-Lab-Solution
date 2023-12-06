// Write a program to implement Dequeue in C.
// Author: Rajpal Nishad, Roll No. 2200950100066, ST-CS(B).

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int dequeue[MAX], front = -1, rear = -1;

void insert_rear()
{
    int item;
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
        rear = (rear + 1) % MAX;
        dequeue[rear] = item;
    }
}

void delete_rear()
{
    int item;
    if (front == rear)
    {
        item = dequeue[rear];
        rear = -1;
        front = -1;
    }
    else
    {
        item = dequeue[rear];
        rear = (rear - 1 + MAX) % MAX;
    }
    printf("The deleted element is %d\n", item);
}

void insert_front()
{
    int item;
    printf("Enter the element to be inserted: ");
    scanf("%d", &item);
    if (front == -1)
    {
        front = 0;
        rear = 0;
        dequeue[front] = item;
    }
    else
    {
        front = (front - 1 + MAX) % MAX;
        dequeue[front] = item;
    }
}

void delete_front()
{
    int item;
    if (front == rear)
    {
        item = dequeue[front];
        front = -1;
        rear = -1;
    }
    else
    {
        item = dequeue[front];
        front = (front + 1) % MAX;
    }
    printf("The deleted element is %d\n", item);
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int i = front;
        do
        {
            printf("%d\n", dequeue[i]);
            i = (i + 1) % MAX;
        } while (i != (rear + 1) % MAX);
    }
}

int main()
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

    return 0;
}
