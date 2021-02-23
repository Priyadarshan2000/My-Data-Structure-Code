//Write a program to store element in 2D array and calculate the address of a particular location using
//Row Major and Column Major Representation.
//Priyadarashan Ghosh
#include<stdio.h>
int main()
{
int l1, u1, l2, u2, ba, size, i, j, rma, cma, R, C;
 printf("\n Enter lower index 1 and upper index 1:");
 scanf("%d%d",&l1,&u1);
 printf("\n Enter lower index 2 and upper index 2:");
 scanf("%d%d",&l2,&u2);
 R = u1-l1+1;
 C = u2-l2+1;
 printf("\n Enter base address and size of memory block");
 scanf("%d%d",&ba, &size);
 printf("\n Enter location index to calculate address:");
 scanf("%d%d",&i,&j);
 i = i-l1;
 j = j-l2;
 rma = ba + (i*C+j)*size;
 cma = ba + (j*R+i)*size;
printf("In row major concept we have: %d",rma);
printf("In col major concept we have: %d",cma);
return 0;
}

