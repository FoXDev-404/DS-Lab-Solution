/**
 * @file sol_12.c
 * @brief Implementation of a circular queue using an array.
 *
 * This program allows the user to perform various operations on a circular queue,
 * such as inserting elements, deleting elements, and displaying the elements.
 * The circular queue is implemented using an array with a fixed maximum size.
 * The front and rear pointers are used to keep track of the elements in the queue.
 * If the front and rear pointers meet, the queue is considered empty.
 * If the rear pointer is one position behind the front pointer, the queue is considered full.
 *
 * The program provides a menu-driven interface for the user to choose the desired operation.
 * The user can insert an element into the queue, delete an element from the queue,
 * display the elements in the queue, or exit the program.
 *
 * @note The maximum size of the queue is defined by the MAX constant.
 *
 * @author Rajpal Nishad, Roll No. 2200950100066
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX], front = -1, rear = -1;

void insert();
void deleteItem();
void display();

int main()
{
    int choice;
    while (1)
    {
        printf("\n\n*** MENU ***\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            deleteItem();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting the program. Goodbye!\n");
            exit(0);
        default:
            printf("Invalid choice! Please choose a valid option.\n");
            break;
        }
    }
    return 0;
}

void insert()
{
    int item;
    printf("Enter the element to be inserted: ");
    scanf("%d", &item);
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("Queue Overflow! Cannot insert.\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if (rear == MAX - 1)
            rear = 0;
        else
            rear++;
    }
    queue[rear] = item;
    printf("\nInserted %d successfully!\n", item);
}

void deleteItem()
{
    if (front == -1)
    {
        printf("Queue Underflow! Cannot delete.\n");
        return;
    }
    printf("Deleted %d successfully!\n", queue[front]);
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if (front == MAX - 1)
            front = 0;
        else
            front++;
    }
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("Queue Underflow! Nothing to display.\n");
        return;
    }
    printf("\nQueue elements:\n");
    if (front <= rear)
    {
        for (i = front; i <= rear; i++)
            printf("%d\t", queue[i]);
    }
    else
    {
        for (i = front; i < MAX; i++)
            printf("%d\t", queue[i]);
        for (i = 0; i <= rear; i++)
            printf("%d\t", queue[i]);
    }
}