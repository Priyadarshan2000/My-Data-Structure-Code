//C program to find HCF & LCM of two numbers
//PRIYADARSHAN GHOSH
#include <stdio.h>
#include <stdlib.h>

int GCD(int a,int b)
{
	int n;
	while(b!=0)
	{
		n=a%b;
		a=b;
		b=n;
	}
	return a;
}
int LCM(int a,int b,int g)
{
	int l;
	l=a*b;
	l=l/g;
	return l;
}
int main()
{
	int a,b,g,l;
	printf("Enter the numbers : ");
	scanf("%d %d",&a,&b);
	g=GCD(a,b);
	l=LCM(a,b,g);
	printf("the GCD and LCM is %d and %d",g,l);
	return 0;
}

