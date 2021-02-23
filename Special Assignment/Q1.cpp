//Priyadarshan Ghosh
#include <stdio.h>
#include <string.h>
#define MAX 100
char stack[MAX];
int top=-1;
int isFull(){
   if(top == MAX-1){
	return 1;
   } 
   else
       	return 0;
}
int isEmpty(){
   if(top == -1){
	return 1;
   } 
   else
       	return 0;
}
void push(char ch)
{
	if(isFull() == 1) {
        printf("\n Stack is full");
	return;
	}
	stack[++top]=ch;
}
char pop()
{
	if (top==-1)
	{
		printf("\nStack is empty");
		return -1;
	}
	return (stack[top--]);
}
char peek(void){
   char x;
   if(top == -1){
	printf("\n Stack is empty");
	return -1;
   }
   x = stack[top];
   return x;
}
int isbalanced(char s[])
{
	char x,ch;
	int i=0,j=0;
	while (s[i]!='\0')
	{
		ch=s[i];
		switch(ch){
			case '{':
			case '(':
			case '[':
				push(ch);
				break;
			case '}':
				if(isEmpty()||(peek() != '{')){
					return 0;
				}
				pop();
				break;
			case ')':
				if(isEmpty()||(peek() != '(')){
					return 0;
				}
				pop();
				break;
			case ']':
				if(isEmpty()||(peek() != '[')){
					return 0;
				}
				pop();
				break;
		}
		i++;
	}
	return isEmpty();
	
}
int main()
{
	int x;
	char s[100];
	printf("enter the string : ");
	gets(s);
	x=isbalanced(s);
	if(x==0)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
	return 0;
}
