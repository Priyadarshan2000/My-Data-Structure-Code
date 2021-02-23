//Implementation of stack operations like push(), pop(), isEmpty(), isFull() using structure pointers.
//PRIYADARSHAN GHSOH
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
struct stk
{
    int stack[MAX];
    int top;
};

int isFull(struct stk *ST)
{
    if (ST->top == MAX - 1)
        return 1;
    else
        return 0;
}

void push(struct stk *ST, int x)
{
    if (isFull(ST) == 1)
    {
        printf("\n Stack is Full");
        return;
    }
    ST->top++;//
    ST->stack[ST->top] = x; //
}

int isEmpty(struct stk *ST)
{
    if (ST->top == -1)
        return 1;
    else
        return 0;
}

int pop(struct stk *ST)
{
    int x;
    if (isEmpty(ST) == 1)
    {
        printf("\n Stack is Empty");
        return -1;
    }
    x = ST->stack[ST->top--];
    return x;
}

int peek(struct stk *ST)
{
    int x;
    if (isEmpty(ST) == 1)
    {
        printf("\n Stack is Empty");
        return -1;
    }
    x = ST->stack[ST->top];
    return x;
}

void display(struct stk *ST)
{
    int i;
    for (i = ST->top; i >= 0; i--)
    {
        printf("\n %d", ST->stack[i]);
    }
}

int main()
{
    int x, ch;
    struct stk *ST;
    ST = (struct stk *)malloc(sizeof(struct stk));
    ST->top = -1;
    while (1)
    {
        printf("\n Press 1 to push an element ");
        printf("\n Press 2 to pop an element ");
        printf("\n Press 3 to peek an element ");
        printf("\n Press 4 to display stack ");
        printf("\n Press 5 to exit ");
        scanf("%d", &ch);

    switch (ch)
        {
        case 1:
            printf("\n Enter an element to be pushed:");
            scanf("%d", &x);
            push(ST, x);
            break;
        case 2:
            x = pop(ST);
            if(x != -1)
            printf("\n The popped element is %d", x);
            break;
        case 3:
            x = peek(ST);
            printf("\n The top element is %d", x);
            break;
        case 4:
            display(ST);
            break;
        case 5:
            exit(0);
        }
    }
}
