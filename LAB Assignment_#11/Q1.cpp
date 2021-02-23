//priyadarshan Ghosh
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct link{
	int data;
	struct link *next;
}node;
void createSLL(node *l)
{
	char ch;
	while(1)
	{
		printf("\n Enter data:");
		scanf("%d",&l->data);
		printf("\n Another node(y/n)?");
		ch=getch();
		if(ch=='n'||ch=='N')
		{
			l->next=NULL;
			return ;	
		}	
		l->next=(node *)malloc(sizeof(node));
		l=l->next;
	}
}

void displaySLL(node *l)
{
	while(l->next!=NULL)
	{
		printf("\t %d",l->data);
		l=l->next;
	}
	printf("\t %d",l->data);
}
void bubblesort(node *h)
{
	node *l1,*l2,*l3=NULL;
	int t;
	for(l1=h;l1->next!=NULL;l1=l1->next)
	{
		for(l2=h;l2->next!=l3;l2=l2->next)
		{
			if(l2->data>l2->next->data)
			{
				t=l2->data;
				l2->data=l2->next->data;
				l2->next->data=t;
			}
		}
		l3=l2;
	}
}

node *reverseSLL(node *h)
{
	node *pre,*cur;
	pre=NULL;
	cur=h;
	while(h!=NULL)
	{
		h=h->next;
		cur->next=pre;
		pre=cur;
		cur=h;
	}
	return (pre);
}
node *mergeSLL(node *h1,node *h2)
{
	node *l;
	l=h1;
	while(l->next!=NULL)
	{
		l=l->next;
	}
	l->next=h2;
}

int countnode(node *l)
{
	int count=0;
	while(l!=NULL)
	{
		l=l->next;
		count++;
	}
	return count;
}

node *splitSLL(node *h)
{
	node *h1,*l;
	l=h;
	int count,i=1,pos;
	printf("\n Enter position from which you want to split:");
	scanf("%d",&pos);
	count=countnode(h);
	if(pos<count)
	{
		while(i<pos)
		{
			l=l->next;
			i++;
		}
	}
	else
	printf("\n Wrong input");
	h1=l->next;
	l->next=NULL;
	printf("\n 1st list is:");
	displaySLL(h);
	printf("\n 2nd list is:");
	displaySLL(h1);
}
int main()
{
	node *h,*h2;
	int ch;
	h=(node *)malloc(sizeof(node));
	while(1)
	{
		printf("\n 1.Press 1 to create a Singly linked list");
		printf("\n 2.Press 2 to display a Singly linked list");
		printf("\n 3.Press 3 to sort a Singly linked list");
		printf("\n 4.Press 4 to reverse a Singly linked list");
		printf("\n 5.Press 5 to merge two lists");
		printf("\n 6.Press 6 to split two lists");
		printf("\n 7.Press 7 to exit");
		printf("\n Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:createSLL(h);
					break;
			case 2:displaySLL(h);
					break;
			case 3:bubblesort(h);
					displaySLL(h);
					break;
			case 4:h=reverseSLL(h);
					displaySLL(h);
					break;
			case 5:printf("\n Create another list to merge with this list");
					h2=(node *)malloc(sizeof(node));
					createSLL(h2);
					printf("\n list is:");
					displaySLL(h2);
					mergeSLL(h,h2);
					printf("\n After merging,the list is:");
					displaySLL(h);
					break;
			case 6:	splitSLL(h);
					break;
			case 7:exit(0);		
					
		}
	}
	return 0;
}
