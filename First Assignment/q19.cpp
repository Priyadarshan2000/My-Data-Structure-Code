//C program to check whether a number is Strong Number or not
//PRIYADARSHAN GHOSH
#include<stdio.h>
 
int factorial(int value)
{
      int count, fact = 1;
      for(count = 1; count <= value; count++)
      {
            fact = fact * count;
      }
      return fact;
}
 
int main()
{
      int num, count, result, rem, sum = 0, temp;
      printf("Enter a Number:\t");
      scanf("%d", &num);
      temp = num;
      for(temp = num; num > 0; num = num / 10)
      {
            count = 1, result = 1;
            rem = num % 10;
            result = factorial(rem);
            sum = sum + result;
      }
      if(sum == temp)
      {
            printf("%d is a Strong Integer\n\n", temp);
      }
      else
      {
            printf("%d is Not a Strong Integer\n\n", temp);
      }
      return 0;
}
