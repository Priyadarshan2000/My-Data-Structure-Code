//To implement Separate chaining method in collision resolution technique.
//Priyadarshan Ghosh
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

struct node
{
    int data;
    struct node *next;
};

struct node *table[SIZE];

void insert()
{

	int value;
 	printf("\nenter a value to insert into hash table\n");
 	scanf("%d",&value);
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    
    int key = value % SIZE;

    
    if(table[key] == NULL)
        table[key] = newNode;
    
    else
    {
        struct node *temp = table[key];
        while(temp->next)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void display()
{
    int i;

    for(i = 0; i < SIZE; i++)
    {
        struct node *temp = table[i];
        printf("table[%d]-->",i);
        while(temp)
        {
            printf("%d -->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}
void search()
{
	int value,i,key;
 	printf("\nenter search element\n");
 	scanf("%d",&value);
 	key=value % SIZE;
 	struct node *temp = table[key];
 	
        while(temp!=NULL)
        {
           if(temp->data==value) 
           {
           		printf("ELEMENT FOUND IN LOCATION %d",key);
           		return;
		   }
            temp = temp->next;
        }
        printf("ELEMENT NOT FOUND");
        return;
    }
 	


int main()
{
    int opt,i;
    
    for(i = 0; i < SIZE; i++)
        table[i] = NULL;
        
    while(1)
    {
        printf("\nPress 1. Insert\t 2. Display \t3. Search \t4.Exit \n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:exit(0);
        }
    }
    return 0;
}
