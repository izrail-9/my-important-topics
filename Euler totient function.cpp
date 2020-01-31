/*#include <stdio.h> 

int phi(int n) 
{ 
	float result = n; // Initialize result as n 

	// Consider all prime factors of n and for every prime 
	// factor p, multiply result with (1 - 1/p) 
	for (int p = 2; p * p <= n; ++p) 
	{ 
		
		// Check if p is a prime factor. 
		if (n % p == 0) 
		{ 
			
			// If yes, then update n and result 
			while (n % p == 0) 
				n /= p; 
			result *= (1.0 - (1.0 / (float)p)); 
		} 
	} 

	// If n has a prime factor greater than sqrt(n) 
	// (There can be at-most one such prime factor) 
	if (n > 1) 
		result *= (1.0 - (1.0 / (float)n)); 

	return (int)result; 
} 
*/
// for avoiding float point numbers
#include <stdio.h> 
#define ll long long int
ll phi(ll n) 
{ 
	ll result = n; // Initialize result as n 

	// Consider all prime factors of n and subtract their 
	// multiples from result 
	for (ll p = 2; p * p <= n; ++p) { 
		
		// Check if p is a prime factor. 
		if (n % p == 0) { 
			
			// If yes, then update n and result 
			while (n % p == 0) 
				n /= p; 
			result -= result / p; 
		} 
	} 

	// If n has a prime factor greater than sqrt(n) 
	// (There can be at-most one such prime factor) 
	if (n > 1) 
		result -= result / n; 
	return result; 
} 
// Driver program to test above function 
int main() 
{ 
	int n;scanf("%d",&n);
		printf("%d",phi(n)); 
	return 0; 
} 
