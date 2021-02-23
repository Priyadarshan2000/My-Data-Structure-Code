//C program to check whether a number is Perfect number or not
//PRIYADARSHAN GHOSH
#include<stdio.h>
  int perfect(int);
  int main()
  {
          int num,s;
        
          printf("Give an integer number: ");
          scanf("%d",&num);
          s = perfect(num);
          if(s == num)
          printf("\nThe given number %d is a perfect number",num);
          else
          printf("\nThe given number %d is not a perfect number",num);
         
          return 0;
          }

  int perfect(int numbr){
          int a=1, sum=0;
          while(a< numbr){
          if(numbr % a == 0)
          sum=sum+a;
          a++;
          }
          return(sum);
          }
