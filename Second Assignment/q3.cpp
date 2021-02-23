//Write a C program to find sum of all-natural numbers between 1 to n using recursion.
//Priyadarshan Ghosh
#include <stdio.h>
int sumOfNaturalNumbers(int start, int end);
int main()
{
    int start, end, sum;
    
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    
    sum = sumOfNaturalNumbers(start, end);
    
    printf("Sum of natural numbers from %d to %d = %d", start, end, sum);
    
    return 0;
}

int sumOfNaturalNumbers(int start, int end)
{
    if(start == end)
        return start;
    else
        return start + sumOfNaturalNumbers(start + 1, end); 
}
