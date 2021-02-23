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
int maximumtop(int n,int p)
{
	int max=peek(),a;
	for(int i=0;i<p-1;i++)
	{
		a=pop();
		max=max>a ? max : a;
	}
	push(max);
	return max;	
}
int main()
{
	int n,p,x,l,res,arr[100];
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the number of operations : ");
	scanf("%d",&p);
	x=n;
	printf("enter the elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=n-1;i>=0;i--)
	{
		push(arr[i]);
	}

	res=maximumtop(n,p);
	printf("%d",res);
	return 0;
}
