//Write a non-recursive function to implement binary search algorithm.
//Priyadarshan Ghosh
#include<stdio.h>
int binarySearch(int n, int a,int arr[]){
    int l,h,mid;
    l = 0;
    h = n - l;
    while(l <= h){
        mid = (l+h)/2;
        if(arr[mid] == a){
            return mid +1;
        }
        else if(arr[mid] < a){
            l = mid +1 ;
        }
        else{
            h = mid - 1;
        }
    }
    return -1;
}
int main(){
int arr[50],n,a,b;
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("Enter the elements of the array\n");
for(int i =0  ; i< n ;i++){
    scanf("%d",&arr[i]);
}
printf("Enter the element to be search: ");
scanf("%d",&a);
b = binarySearch(n,a,arr);
if(b == -1){
    printf("Element is not found\n");
    }
else{
    printf("Element is found at postion %d\n",b);
}
return 0;
}
