//Addition of two polynomials using linked list. Multiplication of two polynomials using linked list.
//Priyadarshan Ghosh
#include<stdio.h>
#include<stdlib.h>
typedef struct Polynomial{
int coeff;
int exp;
struct Polynomial *next;
}poly;
poly *Creation(poly *h)
{
poly *l;
l=h;
char ch;
while(1)
{
printf("Enter the value of the coefficient:");
scanf("%d",&l->coeff);
printf("Enter the value of the exponent:");
scanf("%d",&l->exp);
printf("\nAnother Node(y/n):\n");

if(ch=='n' || ch=='N')
{
l->next=NULL;
return h;
}
l->next=(poly *)malloc(sizeof(poly));
l=l->next;
}
}
void Display(poly *h)
{
poly *l;
l=h;
while(l->next!=NULL)
{
printf("%dx^%d+",l->coeff,l->exp);
l=l->next;
}
printf("%dx^%d",l->coeff,l->exp);
}
poly *Addition(poly *h1,poly *h2)
{
poly *h3;
h3=(poly *)malloc(sizeof(poly));
poly *l,*p,*q;
l=h1;
p=h2;
q=h3;
while(l!=NULL && p!=NULL)
{
if(l->exp == p->exp)
{
q->exp=l->exp;
q->coeff=l->coeff + p->coeff;
q->next=(poly *)malloc(sizeof(poly));
q=q->next;
q->next=NULL;
l=l->next;
p=p->next;
}
else if(l->exp > p->exp)
{
q->exp=l->exp;
q->coeff=l->coeff;
q->next=(poly *)malloc(sizeof(poly));
q=q->next;
q->next=NULL;
l=l->next;
}
else if(l->exp < p->exp)
{
q->exp=p->exp;
q->coeff=p->coeff;
q->next=(poly *)malloc(sizeof(poly));
q=q->next;
q->next=NULL;
p=p->next;
}
}
if(l!=NULL)
{
while(l!=NULL)
{
q->exp=l->exp;
q->coeff=l->coeff;
q->next=(poly *)malloc(sizeof(poly));
q=q->next;
q->next=NULL;
l=l->next;
}
}
if(p!=NULL)
{
while(p!=NULL)
{
q->exp=p->exp;
q->coeff=p->coeff;
q->next=(poly *)malloc(sizeof(poly));
q=q->next;
q->next=NULL;
p=p->next;
}
}
l=h3;
while(l->next->next!=NULL)
{
printf("%dx^%d+",l->coeff,l->exp);
l=l->next;
}
 printf("%dx^%d",l->coeff,l->exp);
}
void Multiplication(poly *h1,poly *h2)
{
poly *h3;
h3=(poly *)malloc(sizeof(poly));
poly *l,*p,*q;
l=h1;
p=h2;
q=h3;
while(l!=NULL)
{
p=h2;
while(p!=NULL)
{
q->exp=l->exp + p->exp;
q->coeff=l->coeff * p->coeff;
q->next=(poly *)malloc(sizeof(poly));
q=q->next;
q->next=NULL;
p=p->next;
}
l=l->next;
}
l=h3;
while(l->next->next!=NULL)
{
printf("%dx^%d+",l->coeff,l->exp);
l=l->next;
}
 printf("%dx^%d",l->coeff,l->exp);
}
int main()
{
poly *h1,*h2;
printf("Creation of Polynomial 1:\n");
h1=(poly *)malloc(sizeof(poly));
h1=Creation(h1);
Display(h1);
printf("\nCreation of Polynomial 2:\n");
h2=(poly *)malloc(sizeof(poly));
h2=Creation(h2);
Display(h2);
printf("\n\n");
printf("Addition of two Polynomials are:");
Addition(h1,h2);
printf("\n\n");
printf("Multiplication of two Polynomials are:");
Multiplication(h1,h2);
}
