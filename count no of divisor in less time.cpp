#include<bits/stdc++.h>
using namespace std;
#define ll int64_t
ll countDivisors(ll n) 
{ 
    ll cnt = 0; 
    for (ll i = 1; i <=n/2; i++)
    { 
        if (n % i == 0)
        { 
       if (n / i == i)
                cnt++; 
            else
               cnt = cnt + 2;
        } 
    } 
    return cnt; 
} 
int main()
{
countDivisors(100);
}
