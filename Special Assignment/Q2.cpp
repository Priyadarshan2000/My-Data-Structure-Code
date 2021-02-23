//Priyadarshan Ghosh
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX];
int top=-1;

int isFull(){
   if(top == MAX-1){
	return 1;
   } 
   else
       	return 0;
}

void push(int x) {
    if(isFull() == 1) {
        printf("\n Stack is full");
	return;
    }
    stack[++top] = x;
}

int isEmpty(){
   if(top == -1){
	return 1;
   } 
   else
       	return 0;
}

int pop(void){
   int x;
   if(isEmpty() == 1){
	printf("\n Stack is empty");
	return -1;
   }
   x = stack[top--];
   return x;
}

int peek(void){
   int x;
   if(top == -1){
	printf("\n Stack is empty");
	return -1;
   }
   x = stack[top];
   return x;
}

void display(){
	int i;
	for(i=top;i>=0;i--){
		printf("\n %d",stack[i]);
	}
}
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
int maximisedSum(int arr[],int n,int k)
{
	int x,ch,sum=0;
	for(int i=n-1;i>=0;i--)
	{
		push(arr[i]);
	}
	sum=sum+pop();
	k--;
	while(stack[top]>stack[top-1] && k!=0)
	{
		sum=sum+pop();
		k--;
	}
	for(int i=0;i<=top;i++)
	{
		enQueue(stack[i]);
	}
	while(k>0)
	{
		sum=sum+deQueue();
		k--;
	}
	return sum;	
}
int main()
{
	int res,n,k;
	printf("Enter the number of elements in Stack : ");
	scanf("%d",&n);
	printf("Enter the number of elements to remove : ");
	scanf("%d",&k);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	res=maximisedSum(arr,n,k);
	printf("%d",res);
}

