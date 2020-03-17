#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
// #include<boost/multiprecision/cpp_int.hpp>
// using boost::multiprecision::cpp_int;
#define ll long long int
// ll f[1000011];
// void fact()
// {f[0] = 1;ll i = 1;while(i<1000011){f[i] = f[i-1]*i;f[i] = f[i]%MOD;i++;}}
// //use when mod is prime no
ll fast_pow(ll a,ll n)
{ll result = 1;while(n>0){if(n&1){result = result*a;result = result%MOD;}a = (a*a)   %MOD;n/= 2;}return (result%MOD);}
// ll inv(ll x)
// {return fast_pow(x,MOD-2);}
int main()
{
    ll a,n=0;cin>>a;
    string b;cin>>b;
    for(ll i=0;i<b.length();i++)
    {
    // imp----for calculating power variable we have to modulo it with (MOD-1)
      n=((n*10)+(b[i]-'0'))%(MOD-1);
    }
    //cout<<b<<endl;
    cout<<(fast_pow(a,n))%MOD<<endl;
}
