//To implement heap sort algorithm.
//Priyadarshan Ghosh
#include <stdio.h>
void heapify(int arr[], int n, int i)
{
    int largest = i;   
    int l = 2 * i + 1; 
    int r = 2 * i + 2;
    int temp;
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n)
{
    int i, temp;
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (i = n - 1; i >= 0; i--)
    {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        printf("%3d", arr[i]);
    printf("\n");
}
int main()
{
    int arr[30];
    int i, size;
    printf("\n\t------- heap sorting method -------\n\n");
    printf("Enter total no. of elements : ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    heapSort(arr, size);
    printf("\n The HEAP Sorted array is \n");
    printArray(arr, size);
}
