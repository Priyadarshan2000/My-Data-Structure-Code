//C program to print all factors of a number
//PRIYADARSHAN GHOSH
#include<stdio.h>
 void findFactors(int n)
 {
   for(int i=1; i<=n/2; i++)
   {
     if(n%i==0)
     printf("%d\t", i);
   }
 }
 int main()
 {
     int number;

     printf("Enter number: ");
     scanf("%d",&number);

     findFactors(number);

     return 0;
 }
