//Write programs to sort a list of elements using Quick sort algorithm considering Mid element as a pivot.
//Priyadarshan Ghosh
#include<stdio.h>
int partition(int arr[], int left, int right)

{
int i = left, j = right;
int tmp;
int pivot = arr[(left + right) / 2];
while (i <= j) {
while (arr[i] < pivot)
i++;
while (arr[j] > pivot)
j--;
if (i <= j) {
tmp = arr[i];
arr[i] = arr[j];
arr[j] = tmp;
i++;
j--;
}
}
return i;
}
void quickSort(int arr[], int left, int right) {
int index = partition(arr, left, right);
if (left < index - 1)
quickSort(arr, left, index - 1);
if (index < right)
quickSort(arr, index, right);
}
int main(){
   int i, count, arr[50];

   printf("Enter how many numbers<=50: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&arr[i]);
   printf("\nData before sorting:");
    for (i = 0; i < count; i++)
{
        printf(" %d", arr[i]);
    }

   quickSort(arr,0,count-1);
   
   printf("\nData after sorting: ");
   for(i=0;i<count;i++)
      printf(" %d",arr[i]);

   return 0;
}
