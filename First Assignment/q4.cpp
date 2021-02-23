//C program to print multiplication table of a number
//PRIYADARSHAN GHOSH
#include<stdio.h>  
  
void tables(int);  
  
int main()  
{  
    int num;  
  
    printf("Enter a positive number\n");  
    scanf("%d", &num);  
  
    printf("\nMultiplication Table for %d is:\n", num);  
  
    tables(num);  
  
    return 0;  
}  
  
void tables(int num)  
{  
    int count;  
  
    for(count = 1; count <= 10; count++)  
    {  
        printf("%d x %d = %d\n", num, count, num*count);  
    }  
}
