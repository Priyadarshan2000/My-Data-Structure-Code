//Write a C program to find reverse of any number using recursion.
//Priyadarshan Ghosh
#include<stdio.h> 

void reverse_num(int num);

int main(void)
{    
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);       

    reverse_num(num);

    return 0; 
}

void reverse_num(int num)
{    
    int rem;

   
    if (num == 0)
    {
        return;
    }

    else
    {
        rem = num % 10; 
        printf("%d", rem);
        reverse_num(num/10);  
    }

}
