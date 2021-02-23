//Priyadarshan Ghosh
//Creation of Doubly Circular Linear Linked list
//Display of Doubly Circular Linear Linked list
//Insert a node in different positions of Doubly Circular Linear Linked list
//Delete a node from different positions of Doubly Circular Linear Linked list
#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
};  
struct node *head;  
void insertion_beginning();  
void insertion_last();  
void deletion_beginning();  
void deletion_last();  
void display();  
  
main ()  
{  
int choice =0;  
    while(choice != 9)  
    {  
        printf("\nMain Menu");  
      
        printf("\n1.Insert in Beginning\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Show\n6.Exit\n");  
        printf("\nEnter your choice?\n");  
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insertion_beginning();  
            break;  
            case 2:  
                    insertion_last();  
            break;  
            case 3:  
            deletion_beginning();  
            break;  
            case 4:  
            deletion_last();  
            break;  
            break;  
            case 5:  
            display();  
            break;  
            case 6:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}  
void insertion_beginning()  
{  
   struct node *ptr,*temp;   
   int item;  
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
    printf("\nEnter Item value");  
    scanf("%d",&item);  
    ptr->data=item;  
   if(head==NULL)  
   {  
      head = ptr;  
      ptr -> next = head;   
      ptr -> prev = head;   
   }  
   else   
   {  
       temp = head;   
    while(temp -> next != head)  
    {  
        temp = temp -> next;   
    }  
    temp -> next = ptr;  
    ptr -> prev = temp;  
    head -> prev = ptr;  
    ptr -> next = head;  
    head = ptr;  
   }  
   printf("\nNode inserted\n");  
}  
     
}  
void insertion_last()  
{  
   struct node *ptr,*temp;  
   int item;  
   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
       printf("\nEnter value");  
       scanf("%d",&item);  
        ptr->data=item;  
       if(head == NULL)  
       {  
           head = ptr;  
           ptr -> next = head;   
           ptr -> prev = head;   
       }  
       else  
       {  
          temp = head;  
          while(temp->next !=head)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          head -> prev = ptr;  
      ptr -> next = head;  
        }  
   }  
     printf("\nnode inserted\n");  
}  
  
void deletion_beginning()  
{  
    struct node *temp;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(head->next == head)  
    {  
        head = NULL;   
        free(head);  
        printf("\nnode deleted\n");  
    }  
    else  
    {  
        temp = head;   
        while(temp -> next != head)  
        {  
            temp = temp -> next;  
        }  
        temp -> next = head -> next;  
        head -> next -> prev = temp;  
        free(head);  
        head = temp -> next;  
    }  
  
}  
void deletion_last()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(head->next == head)  
    {  
        head = NULL;   
        free(head);   
        printf("\nnode deleted\n");  
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next != head)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = head;  
        head -> prev = ptr -> prev;    
        free(ptr);  
        printf("\nnode deleted\n");  
    }  
}  
  
void display()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\nnothing to print");  
    }     
    else  
    {  
        printf("\n printing values ... \n");  
          
        while(ptr -> next != head)  
        {  
          
            printf("%d\n", ptr -> data);  
            ptr = ptr -> next;  
        }  
        printf("%d\n", ptr -> data);  
    }  
              
}  
  

