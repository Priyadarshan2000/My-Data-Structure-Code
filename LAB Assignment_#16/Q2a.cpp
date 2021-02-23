//Priyadarshan
//To calculate factorial of an integer number.

#include<stdio.h>
unsigned long long fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
 main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d! = %llu",n,fact(n));
}
