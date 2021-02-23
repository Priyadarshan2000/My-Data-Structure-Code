//C program to count number of digits in an integer number and display their sum.
//PRIYADARSHAN GHOSH
#include <stdio.h>
#include <stdlib.h>


int countdig(int n){
	int count;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	return count;
}
int sumdig(int n)
{
	int mod,sum=0;
	while(n!=0){
		mod=n%10;
		sum=sum+mod;
		n=n/10;
	}
	return sum;
}
int main()
{
	int x,res1,res2;
	printf("Enter the given number : ");
	scanf("%d",&x);
	res1=countdig(x);
	res2=sumdig(x);
	printf("the number contains %d digits and their sum is %d",res1,res2);
	return 0;
}

