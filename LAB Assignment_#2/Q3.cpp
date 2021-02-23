#include<stdio.h>
#include<conio.h>
typedef struct sparse
{
int row;
int col;
int value;
}stype;

void create_sparse(stype [],int *);
void add_sparse(stype [], int, stype [],int);
void display(stype [], int);
int main()
{
	stype sp1[10],sp2[10],sp3[20];
	int p1,p2;
	printf("\n Enter data for matrix 1:\n");
	create_sparse(sp1,&p1);
	printf("\n The matrix 1=\n");
	display(sp1,p1);
	printf("\n Enter data for matrix 2:\n");
	create_sparse(sp2,&p2);
	printf("\n The matrix 2=\n");
	display(sp2,p2);
	add_sparse(sp1,p1,sp2,p2);
	printf("\n The transpose of matrix 1 is:\n");
	display(sp1,p1);
	return 0;
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
void display(stype sp[], int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("\n%d\t%d\t%d",sp[i].row, sp[i].col, sp[i].value);
}
void add_sparse( stype sp1[], int p1, stype sp2[], int p2)
{
	int i,j,k=1,flag=0;
	stype sp3[20];
	if(sp1[0].row!=sp2[0].row || sp1[0].col!=sp2[0].col)
	{
		printf("\n Addition is not possible");
		return;
	}
	sp3[0].row=sp1[0].row;
	sp3[0].col=sp1[0].col;
	for(i=1;i<p1;i++)
	{
		flag=0;
		for(j=1;j<p2;j++)
		{
			if(sp1[i].row==sp2[j].row && sp1[i].col==sp2[j].col)
			{
				sp3[k].row=sp1[i].row;
				sp3[k].col=sp1[i].col;
				sp3[k].value=sp1[i].value+sp2[j].value;
				k++;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			sp3[k].row=sp1[i].row;
			sp3[k].col=sp1[i].col;
			sp3[k].value=sp1[i].value;
			k++;
		}
	}
	for(j=1;j<p2;j++)
	{
		flag=0;
		for(i=1;i<p1;i++)
		{
			if(sp1[i].row==sp2[j].row && sp1[i].col==sp2[j].col)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			sp3[k].row=sp2[j].row;
			sp3[k].col=sp2[j].col;
			sp3[k].value=sp2[j].value;
			k++;
		}
	}
	sp3[0].value=k-1;
	printf("\n The resultant matrix is=\n");
	display(sp3,k);
}
