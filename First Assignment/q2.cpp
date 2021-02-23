//C program to print all even numbers from 1 to n and also display their sum.
//PRIYADARSHAN GHOSH
#include<stdio.h>
void even( int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
            printf("%d \n",i);
        }
    }
    printf("sum of all even numbers are \n");
    printf("%d",sum);
}

int main(int n)
{
    printf("Enter a number\n");
    scanf("%d",&n);
    even(n);
}
