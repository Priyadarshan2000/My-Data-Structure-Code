//Implementation of Linear Queue operations like enQueue(), deQueue() and displayQ() using structure pointers.
//Priyadarshan Ghosh
#include<stdio.h>
#include<stdlib.h>
#define MAX 50
struct lq{
	int queue[MAX];
	int rear;
	int front;
};


void enQueue(struct lq *Q,int x) {
	
   if(Q->rear == MAX-1){
      printf("Queue is full");
   }
   if(Q->rear == -1 && Q->front == -1){
      Q->front = Q->rear = 0;
   }
   else
     Q->rear++;
   Q->queue[Q->rear] = x;  
}

int deQueue(struct lq *Q) {
   int x;
   if(Q->front == -1 || Q->front > Q->rear) {
      printf(" Queue is empty");
      return -1;
   }
   x = Q->queue[Q->front++];
   return x;
}

void displayQ(struct lq *Q) {
  int i;
  for(i=Q->front; i<= Q->rear; i++)
     printf("%d ", Q->queue[i]);
}

int main() {
	int x, p;
	struct lq *Q;
	Q = (struct lq *)malloc(sizeof(struct lq));
	Q->front=-1;
	Q->rear=-1;
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
			  		enQueue(Q,p);
			  		break;
			case 2: p = deQueue(Q);
					if(Q->front >= -1 && p!=-1)
			 			printf("\n The deleted element is %d",p);
			 		break;
			case 3: displayQ(Q);
					break;
			case 4: exit(0);
		}
	}
}
