//Priyadarashan Ghosh
#include <stdio.h>
#include <stdlib.h>
typedef struct sparse
{
	int row;
	int col;
	int value;
}stype;
void display(stype sp[], int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("\n%d\t%d\t%d",sp[i].row, sp[i].col, sp[i].value);
}
void create_sparse(stype sp[], int *p)
{
	int i,j,k=0,nor,noc,x;
	printf("\n Enter number of rows, cols & non-zero values:");
	scanf("%d%d%d",&nor,&noc,&sp[k].value);
	sp[k].row=nor;
	sp[k].col=noc;
	k++;
	printf("\n Enter elements one by one:");
	for(i=0;i<nor;i++)
	{
		for(j=0;j<noc;j++)
		{
			scanf("%d",&x);
			if(x!=0)
			{
			sp[k].row=i;
			sp[k].col=j;
			sp[k].value=x;
			k++;
			}
		}
	}
	*p=k;
}
int main()
{
	int r,c,i,j,sparse_counter=0,x,k=0,p1;
	stype sp[10];
	printf("enter the no. of rows and cols. :");
	scanf("%d %d",&r,&c);
	printf("\nEnter the elements of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&x);
			if(x!=0)
			{
				sparse_counter++;
			}
		}
	}
	if(sparse_counter < ((r*c)/3) )
	{
		printf("Matrix is sparse representable\n");
		create_sparse(sp,&p1);
		display(sp,p1);
	}
	else{
		printf("Matrix is not sparse matrix");
	}
}
