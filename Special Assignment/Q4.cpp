#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX];
int top;

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

int main(){
   top = -1;
	int n;
    int c=0;
    int i,j;
    int arr1[20];
    int arr2[20];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
       
    }
     for (int i = 0; i < n; i++)
    {
  
        scanf("%d",&arr2[i]);
        push(arr2[i]);
    }
   
    
    for(j =0 ;arr1[j] != arr2[j];j++)
    {
       
        int r = arr1[0];
        for ( i = 0; i < n-1; i++)
        {
            arr1[i] = arr1[i+1];
        }
        arr1[i]=r;  
        c++; 
       
    }
    int k=0;
    while (arr1[k] == arr2[k])
    {
       pop();
       c++;
       k++;
    }
    
   
   
   printf("%d",c);
    return 0;

}
 
