//Write a program to sort a list of elements using Insertion sort algorithm.
//Priyadarshan Ghosh
#include <stdio.h>
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) 
{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) 
{
			arr[j + 1] = arr[j];
			j = j - 1;
}
		arr[j + 1] = key;
}
}
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
	int a[50],n,i;
	printf("\n Enter how many numbers<=50");
	scanf("%d",&n);
	printf("\n Enter numbers one by one:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		insertionSort(a, n);
		printf("Sorted array: \n");
		printArray(a, n);
}
