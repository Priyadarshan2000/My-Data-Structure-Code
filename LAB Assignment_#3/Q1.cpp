//Write a function to implement linear search algorithm.
//Priyadarshan Ghosh
#include<stdio.h>

int linearSearch(int n, int a,int arr[]){
    for(int i =0 ; i <n;i++){
        if(arr[i] == a){
            return i+1;
        }
    }
    return -1;
}
int main(){
int arr[50],n,a,l;
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("Enter the elements of the array\n");
for(int i =0  ; i< n ;i++){
    scanf("%d",&arr[i]);
}
printf("Enter the element to be search: ");
scanf("%d",&a);
l = linearSearch(n,a,arr);
if(l == -1){
    printf("Element is not found\n");
    }
else{
    printf("Element is found at postion %d\n",l);
}


return 0;
}


