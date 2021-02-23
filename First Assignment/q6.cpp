//C program to check whether a number is palindrome or not
//PRIYADARSHAN GHOSH
#include<stdio.h>
 int checkPalindrome(int number)
 {
   int temp, remainder, sum=0;

   temp = number;

   while( number!=0 )
   {
       remainder = number % 10;
       sum = sum*10 + remainder;
       number /= 10;
   }

   if ( sum == temp ) return 0;

   else return 1;
 }

 int main()
 {
      int number;

      printf("Enter the number: ");
      scanf("%d", &number);

      if(checkPalindrome(number) == 0)
      printf("%d is a palindrome number.\n",number);
      else
      printf("%d is not a palindrome number.\n",number);

      return 0;
 }
