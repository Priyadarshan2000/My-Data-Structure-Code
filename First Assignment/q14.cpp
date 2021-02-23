//C program to find all prime factors of a given number
//PRIYADARSHAN GHOSH
#include<stdio.h>

void primeFactors(int n) {
   int i;
   while(n % 2 == 0) {
      printf("%d, ", 2);
      n = n/2; 
   }
   for(i = 3; i*i<=n; i=i+2){ 
      while(n % i == 0) {
         printf("%d, ", i);
         n = n/i;
      }
   }
   if(n > 2) {
      printf("%d, ", n);
   }
}
main() {
   int n;
   printf("Enter a number: ");
   scanf("%d", &n);
   primeFactors(n);
}
