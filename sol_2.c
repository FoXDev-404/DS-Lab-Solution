// Write a program to implement Stack using Linked List in C.

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
} *first = NULL, *top = NULL;

void push()
{
    char ch = 'y';
    do
    {
        struct stack *newStack = (struct stack *)malloc(sizeof(struct stack));
        newStack->next = NULL;
        printf("\nEnter the element to be pushed: ");
        scanf("%d", &newStack->data);
        if (first == NULL)
        {
            first = newStack;
            top = newStack;
        }
        else
        {
            top->next = newStack;
            top = newStack;
        }
        printf("Done");
        printf("\nDo you want to push more elements? (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
}

void pop()
{
    char ch = 'y';
    do
    {
        if (first == NULL && top == NULL)
        {
            printf("\nStack is empty");
            break;
        }
        else if (first == top)
        {
            printf("\nElement popped is %d", top->data);
            free(top);
            first = NULL;
            top = NULL;
        }
        else
        {
            struct stack *temp = first;
            while (temp->next != top)
            {
                temp = temp->next;
            }
            printf("\nElement popped is %d", top->data);
            free(top);
            top = temp;
            top->next = NULL;
        }
        printf("\nDo you want to pop more elements? (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
}

void display()
{
    struct stack *temp = first;
    if (first == NULL && top == NULL)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nStack elements are: ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("<-top\n");
    }
}

int main()
{
    printf("\n====================================\n");
    printf("Rajpal Nishad Roll No. 2200950100066");
    int choice, x = 1;
    printf("\n====================================\n");
    printf("      STACK USING LINKED LIST       ");
    do
    {
        printf("\n------------------------------------\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            x = 0;
            break;
        default:
            printf("\nInvalid choice");
        }
    } while (x);
}