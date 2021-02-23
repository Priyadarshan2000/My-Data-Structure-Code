//Evaluate postfix expression.
//Priyadarshan Ghosh
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max 20
struct stack
{
	float value[max];
	int top;
};
struct stack stk;


int isFull()
{
	if(stk.top==max-1)
		return 1;
		
	return 0;
}

int isEmpty()
{
	if(stk.top==-1)
		return 1;
		
	return 0;
}

int push(float key)
{
	if(isFull())
		return -1;
	stk.value[++stk.top]=key;
	return stk.top;
}


float pop()
{
	if(isEmpty())
		return -1;
	return stk.value[stk.top--];
			
}

float postfixEvaluation(char postfix[], float value[])
{
  int i=0;
  char ch;
  float op1, op2, s;
  while(postfix[i]!=NULL) 
  {
    ch = postfix[i];
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
		{
       		push(value[i]);
    	}
    else
    {
      op2 = pop();
      op1 = pop();
      switch(ch) {
        case '+': push(op1+op2);
                   break;
        case '-': push(op1-op2);
                   break;
		case '*': push(op1*op2);
                   break;
		case '/': push(op1/op2);
                   break;
		case '^': push(pow(op1,op2));
                   break;
      }
    }
    i++;
  }
  
  return pop();
}

int main() 
{
  char postfix[20], ch;
  float value[20], result;
  int i=0;
  printf("ENTER A VALID POSTFIX EXPRESSION = ");
  gets(postfix);
  
  while(postfix[i]!='\0')
  { 
    ch = postfix[i];
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
       printf("\nENTER THE VALUE OF %c =",ch);
       scanf("%f",&value[i]);
    }
    i++;
  }
  result = postfixEvaluation(postfix, value);
  printf("\nRESULT = %f", result);
  return 0;
}


