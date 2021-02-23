//Priyadarshan Ghosh
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int LQ[MAX];
int rear = -1;
int front = -1;

void enQueue(int x) {
	
   if(rear == MAX-1){
      printf("Queue is full");
   }
   if(rear == -1 && front == -1){
      front = rear = 0;
   }
   else
     rear++;
   LQ[rear] = x;  
}

int deQueue() {
   int x;
   if(front == -1 || front > rear) {
      printf("Queue is empty");
      return -1;
   }
   x = LQ[front++];
   return x;
}

void displayQ() {
  int i;
  for(i=front; i<= rear; i++)
     printf("%d ", LQ[i]);
}

int main() {
	int x, p;
	while(1){
		printf("\n Press 1 to insert an element");
		printf("\n Press 2 to delete an element");
		printf("\n Press 3 to display elements");
		printf("\n Press 4 to exit");
		printf("\n ENTER THE OPERATION : ");
		scanf("%d",&x);
		switch(x){
			case 1: printf("\n Enter an element to insert:");
			  		scanf("%d",&p);
			  		enQueue(p);
			  		break;
			case 2: p = deQueue();
					if(front >= -1 && p!=-1)
			 			printf("\n The deleted element is %d",p);
			 		break;
			case 3: displayQ();
					break;
			case 4: exit(0);
		}
	}
}
