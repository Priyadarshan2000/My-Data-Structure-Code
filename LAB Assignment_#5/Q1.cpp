#include <stdio.h>
#define MAX 100
long int stack[MAX];
int top=-1;
void push(char ch)
{
	if (top == MAX-1)
	{
		printf("\nStack Overflow");
		return;
	}
	stack[++top]=ch;
}
int pop()
{
	if (top==-1)
	{
		printf("\nStack Underflow");
		return -1;
	}
	return (stack[top--]);
}
int preced(char ch)
{
	if (ch == '^')
		return 5;
	else if (ch == '/')
		return 4;
	else if (ch == '*')
		return 3;
	else if (ch == '+')
		return 2;
	else if (ch == '-')
		return 1;
	else
		return 0;
}
void infixToPostfix(char infix[])
{
	char postfix[50], x, ch;
	int i=0, j=0;
	while(infix[i]!='\0') 
	{
		ch = infix[i];
		switch (ch)
		{
			case '(':	push (ch);
						break;
			case ')':	while ((ch=pop()) != '(')
							postfix[j++] = ch;
						break;
			case '^':
			case '/':
			case '*':
			case '+':
			case '-':
						while (preced(ch) < preced(stack[top]))
							postfix[j++] = pop();
						push(ch);
						break;
			default:	postfix[j++] = ch;
		}
		i++;
	}
	postfix[j] = '\0';
	printf("\nPostfix expression: ");
	puts(postfix);
}
int main()
{
	char infix[50];
	printf("Enter infix expression: ");
	gets(infix);
	infixToPostfix(infix);
}

