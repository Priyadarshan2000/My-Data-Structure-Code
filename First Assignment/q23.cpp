//C program to convert from Decimal to Binary number system
//PRIYADARSHAN GHOSH
#include <stdio.h>

void decToBinary(int);

int main()
{
    int number;

    printf("Enter number to convert to binary: ");
    scanf("%d", &number);
    
    decToBinary(number);
	return 0;
}

void decToBinary(int num)
{
    if (num == 0)
    {
        return ;
    }

    decToBinary(num / 2);
    printf("%d", num % 2);
}
