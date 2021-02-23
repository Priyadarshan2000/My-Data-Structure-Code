//Write a C program to print all even or odd numbers in given range using recursion.
//Priyadarshan Ghosh
#include <stdio.h>

void printEvenOdd(int cur, int limit);

int main()
{
    int lowerLimit, upperLimit;
    
   
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);
    
    printf("Even/odd Numbers from %d to %d are: ", lowerLimit, upperLimit);
    printEvenOdd(lowerLimit, upperLimit); 
    
    return 0;
}

void printEvenOdd(int cur, int limit)
{
    if(cur > limit)
        return;
    
    printf("%d, ", cur);
    

    printEvenOdd(cur + 2, limit);
}
