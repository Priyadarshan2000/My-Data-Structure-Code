//To implement Linear probing method in collision resolution technique.
//Priyadarshan Ghosh
#include <stdio.h>
#include <conio.h>

int hasht(int key, int tsize)
{
	int i ;
	i = key%tsize ;
	return i;
}

int linearProbe(int key, int tsize)
{
	int i ;
	i = (key+1)%tsize ;
	return i ;
}

int main()
{
    int key, arr[20], hash[20], tsize, i, n, k;
    
    printf ("\nEnter the size of the hash table:  ");
    	scanf ("%d",&tsize);

    printf ("\nEnter the number of elements: ");
    	scanf ("%d",&n);

    for (i=0;i<tsize;i++)
 		hash[i]=-1 ;

    printf ("Enter Elements: ");
    for (i=0;i<n;i++)
 		scanf("%d",&arr[i]);
 	
 	for (i=0;i<tsize;i++)
    	hash[i]=-1 ;
    for(k=0; k<n; k++)
	{
  		key=arr[k] ;
  		i = hasht(key, tsize);
  		while (hash[i]!=-1)
      		i = linearProbe(i, tsize);
  		hash[i]=key ;
    }
    printf("\nThe elements in the array are: ");
    for (i=0;i<tsize;i++)
  		printf("\n	Element at position %d: %d",i,hash[i]);
}
