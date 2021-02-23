// a) Define following functions to representation Stack using Linked List i) push() ii) pop() iii) display()
//Priyadarshan Ghosh
#include <stdio.h>
#include <stdlib.h>
void push();
int pop();
void display();

struct node
{
int value;
struct node *next;
};
struct node *head;

void push (int value)
{
struct node *ptr = (struct node*)malloc(sizeof(struct node));
if(ptr == NULL)

{
printf("\n Overflow Condition.");
}
else
{
if(head==NULL)
{
ptr->value = value;
ptr -> next = NULL;
head=ptr;
}
else
{
ptr->value = value;
ptr->next = head;
head=ptr;

}

}
}

int pop()
{
int item;
struct node *ptr;

if (head == NULL)
{
printf("\n Underflow Condition.");
}
else
{
item = head->value;
ptr = head;
head = head->next;
free(ptr);
return item;
}
}
void display()
{
int i;
struct node *ptr;
ptr=head;
if(ptr == NULL)
{
printf("\n Stack is empty.\n");
}
else
{
printf("\n The Stack elements are: \n");
while(ptr!=NULL)

{
printf(" %d\n",ptr->value);
ptr = ptr->next;
}
}
}

main ()
{
int ch=0;
printf("\n Stack operations using linked list -->\n");
while(ch != 4)
{
printf("\n Press 1 for Push an element: ");
printf("\n Press 2 for Pop an element: ");
printf("\n Press 3 for display: ");
printf("\n Press 4 for exit: ");
printf("\n Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
int value;
printf("\n Enter the element for push operation: ");
scanf("%d",&value);

push(value);
break;
}
case 2:
{
int item;
item = pop();
printf("\n The element which is popped : %d", item);
break;
}
case 3:
{
display();
break;
}
case 4:
{
break;
}
default:
{
printf("\n Your Choice is Wrong.");
}
};
}
}
