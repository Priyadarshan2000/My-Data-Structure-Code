#include <stdio.h>
void inputArray(int a[], int n){
int i;
printf("\n Enter numbers one by one:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

}
void selectionSort(int a[], int n)
{
int i, j, min, l, t;
for (i = 0; i < n-1; i++)
{ min = a[i];
l=i;
for (j = i+1; j < n; j++) {
if (a[j] < min) {
min = a[j];
l=j;
}
}
if(i!=l){
t = a[i];
a[i]=a[l];
a[l]=t;

}
}
printf("\n after pass %d :", i + 1);
printArray(a, n);
}
void printArray(int a[], int n)
{ int i;
for (i=0; i < n; i++)
printf("%d ", a[i]);
printf("\n");
}
int main()
{
int a[50],n;
printf("\n Enter how many numbers<=50");
scanf("%d",&n);
inputArray(a,n);
selectionSort(a, n);
printf("Sorted array: \n");
printArray(a, n);
return 0;
}

     
