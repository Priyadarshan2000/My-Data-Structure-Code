//C program to find sum of prime numbers in given range and also display their sum.
//PRIYADARSHAN GHOSH
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int checkprime(int a)
{
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i!=0)
		{
			continue;
		}
		else 
		return 1; 
	}
	return 0;
}
void primenumbersrange(int a,int b)
{
	int x,sum=0;
	printf("the prime numbers are :\n");
	for (int i=a;i<=b;i++)
	{
		x=checkprime(i);
		if (x==0)
		{
			printf("%d ",i);
			sum=sum+i;
		}
	}
	printf("and their sum is %d",sum);
}
int main()
{
	int a,b,g,l;
	printf("Enter the range : ");
	scanf("%d %d",&a,&b);
	primenumbersrange(a,b);
	return 0;
}
