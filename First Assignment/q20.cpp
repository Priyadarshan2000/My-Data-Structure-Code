//C program to print Strong numbers in given range and also display their sum.
//PRIYADARSHAN GHOSH
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int factorial(int n) 
{ 
	int i,f=1;
    for(i=1;i<=n;i++)
    {
    	f=f*i;
	}
	return f;
} 

int strong(int n)
{	
	int mod,num,f,sum=0;
	num=n;
	while(num!=0)
	{
		mod=num%10;
		f=factorial(mod);
		sum += f;
		num /= 10; 
	}
	if (sum==n)
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
		x=strong(i);
		if (x==1)
		{
			printf("%d ",i);
			sum += i;
		}	
	}
	printf("\nThe sum of all strong numbers is %d",sum);
}

int main()
{
	int a,b;
	printf("Enter the range : ");
	scanf("%d %d",&a,&b);
	printf("the strong numbers are :\n");
	range(a,b);
	return 0;
}

