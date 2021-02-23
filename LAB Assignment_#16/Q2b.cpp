#include <stdio.h>
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int getGCD(int a[], int n)
{
	int res=a[0];
	for (int i = 1; i < n; i++) 
    { 
        res = gcd(a[i], res); 
        if(res == 1) 
            return 1; 
    } 
    return res; 
}
int main()
{
	int n, arr[50], s1, s2;
	printf("Enter range:");
	scanf ("%d", &n);
	printf("Enter elements: ");
	for (int i=0; i<n; i++)
		scanf ("%d", &arr[i]);
	s1 = getGCD(arr, n);
	printf("GCD: %d\n", s1);
}
