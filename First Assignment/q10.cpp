//C program to calculate factorial of a number
//PRIYADARSHAN GHOSH
#include<stdio.h>
long int Factori(int);
int main()
{
        long int fact;
        int numbr;

        printf("Enter a number: ");
        scanf("%d",&numbr);
        fact= Factori(numbr);
        printf("Factorial of %d is: %ld",numbr,fact);
        return 0;
}

long int Factori(int n){
         int i;
         long int factorial;
         factorial =1;
         for(i=1;i<=n;i++)
         factorial=factorial*i;
         return(factorial);
    }
