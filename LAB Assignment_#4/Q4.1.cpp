//Implementation of stack operations like push(), pop(), isEmpty(), isFull() using Array
//PRIYADARSHAN GHSOH
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
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
        printf("\n Stack overflow!");
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

int main(){
	int x, ch;
	while(1){
		printf("\n Press 1 to push an element ");
		printf("\n Press 2 to pop an element ");
		printf("\n Press 3 to peek an element ");
		printf("\n Press 4 to display stack ");
		printf("\n Press 5 to exit ");
		scanf("%d",&ch);
		switch(ch){
			case 1: printf("\n Enter an element to be pushed:");
					scanf("%d",&x);
					push(x);
					break;
			case 2: x = pop();
                    if(x != -1)
					printf("\n The popped element is %d",x);
					break;
		    case 3: x = peek();
					if(x != -1)
					printf("\n The top element is %d",x);
					break;
			case 4: display();
			 		break;
			case 5: exit(0);
		}
	}
}



