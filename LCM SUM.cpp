// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
#define n 1000002
#define ll long long int

ll phi[n + 2], ans[n + 2];

// Euler totient Function
void ETF()
{
	for (int i = 1; i <= n; i++) {
		phi[i] = i;
	}

	for (int i = 2; i <= n; i++) {
		if (phi[i] == i) {
			phi[i] = i - 1;
			for (int j = 2 * i; j <= n; j += i) {
				phi[j] = (phi[j] * (i - 1)) / i;
			}
		}
	}
}

// Function to return the required LCM sum
void LcmSum()
{
	ETF();

	for (int i = 1; i <= n; i++) {

		// Summation of d * ETF(d) where
		// d belongs to set of divisors of n
		for (int j = i; j <= n; j += i) {
			ans[j] += (i * phi[i]);
		}
	}
}
// Driver code
int main()
{
    ll t;cin>>t;
    memset(ans,0,sizeof(ans));
    LcmSum();
    while(t--)
    {
	ll m;cin>>m;

	ll answer = ans[m];
	answer = (answer + 1) * m;
	answer = answer / 2;
    cout<<answer<<endl;
    }

	return 0;
}
