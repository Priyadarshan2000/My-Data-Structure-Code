//C program to print the sum of all odd numbers in given range
//PRIYADARSHAN GHOSH
#include<stdio.h>
void odd( int a, int b)
{
    int sum=0;
    for(int i=a;i<=b;i++)
    {
        if(i%2==1)
        {
            sum=sum+i;
            
        }
    }
    printf("sum of all odd numbers are \n");
    printf("%d",sum);
}

int main(int a, int b)
{
    printf("Enter a range\n");
    scanf("%d%d",&a,&b);
    odd(a,b);
}
