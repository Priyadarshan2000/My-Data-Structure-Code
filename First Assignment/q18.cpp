//C program to print all Perfect numbers between 1 to n and also display their sum.
//PRIYADARSHAN GHOSH
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int perfect(int n)
{	int sum=0,i;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum =sum + i;	
		}
	}
	if(n==sum)
	{
		return 1;
	}
	else return 0;
}
void range(int a,int b)
{
	int x,sum=0;
	for(int i=a;i<=b;i++)
	{
		x=perfect(i);
		if (x==1)
		{
			printf("%d ",i);
			sum += i;
		}	
	}
	printf("\nthe sum of perfect numbers is %d",sum);
}
int main()
{
	int a,b;
	printf("Enter the range : ");
	scanf("%d %d",&a,&b);
	printf("the perfect numbers are :\n");
	range(a,b);
	return 0;
}

