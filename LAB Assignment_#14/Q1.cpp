//Q1.Creation of Singly Circular Linked list,Display of Singly Circular Linked list,Insert a node in different positions of Singly Circular Linked list,Delete a node from different positions of Singly Circular Linked list.
//Priyadarshan Ghosh
#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
struct node * next;
}*head;

void createList(int n);
void displayList();
void insert_beginning(int data);
void search_element(int data);
void updating_element(int data);
void insert_given_position(int data, int position);
void delete_beginning();
void delete_given_position();
void reverse_list();

int main()
{
int n, data, choice=1;
head = NULL;
while(choice != 0)
{

printf("1. Create List\n");
printf("2. Insert at beginning\n");
printf("3. Insert at any position\n");
printf("4. Delete at beginning\n");
printf("5. Delete at any position\n");
printf("6. Search Element\n");

printf("0. Exit\n");
printf("\n\n");
printf("Enter your choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("Enter the total number of nodes in list: ");
scanf("%d", &n);
createList(n);
displayList();

break;
case 2:
printf("Enter data to be inserted at beginning: ");
scanf("%d", &data);
insert_beginning(data);
displayList();
break;
case 3:
printf("Enter node position: ");
scanf("%d", &n);
printf("Enter data you want to insert at %d position: ", n);
scanf("%d", &data);
insert_given_position(data, n);
displayList();
break;
case 4:
if(head == NULL)
{
printf("\nThe list is empty\n");
}
else
{
delete_beginning();
displayList();
}
break;

case 5:
if(head == NULL)
{
printf("\nThe list is empty\n");
}
else
{
delete_given_position();
displayList();
}
break;
case 6:
printf("\nEnter the element to be searched : ");
scanf("%d",&data);
search_element(data);
break;

default:
printf("Error! Invalid choice.");
}
printf("\n");
}
return 0;
}

void createList(int n)

{
int i, data;
struct node *prevNode, *newNode;
if(n >= 1)
{

head = (struct node *)malloc(sizeof(struct node));
printf("Data of node 1 : ");
scanf("%d", &data);
head->data = data;
head->next = NULL;
prevNode = head;

for(i=2; i<=n; i++)
{
newNode = (struct node *)malloc(sizeof(struct node));
printf("Data of node %d : ", i);
scanf("%d", &data);
newNode->data = data;
newNode->next = NULL;

prevNode->next = newNode;
prevNode = newNode;
}

prevNode->next = head;
}
}

void displayList()
{
struct node *current;
int n = 1;
if(head == NULL)
{
printf("List is empty.\n");
}
else
{
current = head;
printf("The SINGLY CIRCULAR LINKED LIST IS : \n");
do {
printf("%d\t",current->data);
current = current->next;
n++;
}while(current != head);
}
}

void insert_beginning(int data)
{

struct node *newNode, *current;
if(head == NULL)
{
printf("List is empty.\n");
}
else
{

newNode = (struct node *)malloc(sizeof(struct node));
newNode->data = data;
newNode->next = head;
printf("\nThe element %d is inserted at the beginning",data);
printf("\n");

current = head;
while(current->next != head)
{
current = current->next;
}
current->next = newNode;

head = newNode;
}
}

void insert_given_position(int data, int position)

{
struct node *newNode, *current;
int i;
if(head == NULL)
{
printf("List is empty.\n");
}
else if(position == 0)
{
insert_beginning(data);
}
else
{

newNode = (struct node *)malloc(sizeof(struct node));
newNode->data = data;
printf("\nThe element %d is inserted at index %d",data,position);
printf("\n");

current = head;
for(i=2; i<=position; i++)
{
current = current->next;
}

newNode->next = current->next;

current->next = newNode;
}
}

void delete_beginning()
{
struct node * temp,*s;

if (head == head->next)
{
head = NULL;
printf("\nThe List is empty\n");
}
else
{
temp = head;
s = head;
while (temp->next != head)
{
temp = temp -> next;
}
printf("\nThe element %d is deleted at the beginning",s -> data);
printf("\n");
head = s->next;
temp->next = head;
printf("\n");

free(s);
}
}

void delete_given_position()
{
struct node * temp, *s;
if (head == NULL)
printf("\nThe List is empty");
else
{
int count = 0, pos;
printf("\nEnter the position to be deleted : ");
scanf("%d", &pos);
temp = head;
while (count < pos)
{
s = temp;
temp = temp -> next;
count++;
}
printf("\nThe element %d at index %d is deleted",temp -> data,pos);
printf("\n");
s -> next = temp -> next;
printf("\n");
free(temp);

}
}

void search_element(int data)
{
struct node * temp = head;
int index = 0;
while(temp)
{
if(temp -> data == data)
{
printf("\nElement found at index %d in the list",index);
break;
}
else
{
temp = temp -> next;
index++;
}
}
}
