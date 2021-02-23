//C program to count frequency of digits in a given number
//PRIYADARSHAN GHOSH
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int freqDig(int n,int d)
{
	int fod=0,r;
	while(n>0)
	{
		r=n%10;
		if(d==r)
		{
			fod++;
		}
		n=n/10;
	}
	return fod;
}
int main()
{
	int fod,n,d;
	printf("Enter the integer number:");
	scanf("%d",&n);
	printf("Enter a digit : ");
	scanf("%d",&d);
	fod=freqDig(n,d);
	printf("\nNumber of digits = %d \n",fod);
	
}

