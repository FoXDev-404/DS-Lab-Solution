// Write a program to implement Stack using array in C.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 10

struct stack
{
    int data[MAX];
    int first;
    int top;
} s;

void push()
{
    char ch = 'y';

    do
    {
        if (s.top == MAX - 1)
        {
            printf("\nStack is full");
            break;
        }
        else
        {
            printf("\nEnter the element to be pushed: ");
            scanf("%d", &s.data[++s.top]);
            printf("Done");
        }
        printf("\nDo you want to push more elements? (y/n): ");
        ch = getch();
        printf("%c", ch);
    } while (ch == 'y' || ch == 'Y');
}

void pop()
{
    char ch = 'y';

    do
    {
        if (s.first > s.top)
        {
            printf("\nStack is empty");
            break;
        }
        else
        {
            printf("\nElement popped is %d", s.data[s.top--]);
            s.top--;
        }
        printf("\nDo you want to pop more elements? (y/n): ");
        ch = getch();
        printf("%c", ch);
    } while (ch == 'y' || ch == 'Y');
}

void display()
{
    int i;

    if (s.first > s.top)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nStack elements are: ");
        for (i = s.top; i >= s.first; i--)
        {
            printf("%d ", s.data[i]);
        }
        printf("<-top\n");
    }
}

int main()
{
    printf("\n====================================\n");
    printf("Rajpal Nishad Roll No. 2200950100066");
    s.first = 0;
    s.top = -1;
    int c, size, i, x = 1;
    printf("\n====================================\n");
    printf("         STACK USING ARRAY     ");

    do
    {
        printf("\n------------------------------------");
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &c);
        printf("\n------------------------------------");
        switch (c)
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
            exit(0);
            break;
        default:
            printf("\nInvalid choice");
        }
    } while (x);
    printf("\n====================================\n");
    return 0;
}