#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++){
        
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    printf("\n after Pass %d:", i + 1);
    printArray(arr, n);
    }
}

void modifiedBubbleSort(int arr[], int n)
{
    int i, j,sw;
    for (i = 0; i < n - 1; i++){
        sw=0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                sw =1;
            }
        }
    if (sw == 0){
            break;
        }
    printf("\n after Pass %d:", i + 1);
    printArray(arr, n);
    }
}

int main()
{
    int a[50], n, i;
    printf("\n Enter how many numbers <= 50: ");
    scanf("%d", &n);
    printf("\n Enter numbers one by one:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    modifiedBubbleSort(a, n);
    printf("Sorted array: \n");
    printArray(a, n);
}
