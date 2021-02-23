//Implementation of stack operations like push(), pop(), isEmpty(), isFull() using Structure
//PRIYADARSHAN GHSOH
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct stk {
   int stack[MAX];
   int top;
};
struct stk ST;

int isFull(){
  if(ST.top == MAX-1)
     return 1;
  else
     return 0;
}

void push(int x) {
   if(isFull()==1){
      printf("\n Stack is Full");
      return;
   }
   ST.stack[++ST.top] = x;
}

int isEmpty() {
  if(ST.top == -1)
     return 1;
  else
     return 0;
}

int pop() {
  int x;
  if(isEmpty() == 1){
    printf("\n Stack is Empty");
    return -1;
  }
  x = ST.stack[ST.top--];
  return x;
}

int peek() {
  int x;
  if(isEmpty() == 1){
    printf("\n Stack is Empty");
    return -1;
  }
  x = ST.stack[ST.top];
  return x;
}

void display() {
  int i;
  for(i = ST.top;i>=0;i--){
    printf("\n %d",ST.stack[i]);
  }
}

int main(){
	int x, ch;
	ST.top=-1;
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


