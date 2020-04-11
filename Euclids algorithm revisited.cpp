\\ link:-https://www.spoj.com/problems/MAIN74/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 1000000007
void multiply(ll F[2][2],ll M[2][2])
{
    long long int  x = ((F[0][0]*M[0][0])%MAX + (F[0][1]*M[1][0])%MAX)%MAX;
    long long int  y =  ((F[0][0]*M[0][1])%MAX + (F[0][1]*M[1][1])%MAX)%MAX;
    long long  int z =  ((F[1][0]*M[0][0])%MAX + (F[1][1]*M[1][0])%MAX)%MAX;
    long long int w =  ((F[1][0]*M[0][1])%MAX + (F[1][1]*M[1][1])%MAX)%MAX;

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
  //  return r;
}
ll fib(ll n)
{
    ll m[2][2]={{1,1},{1,0}};
    ll res[2][2]={{1,1},{1,0}};
    n-=2;
    while(n>0)
    {
        if(n&1)
        {
            multiply(res,m);
        }
        n/=2;
        multiply(m,m);
    }
    return res[0][0];
}
// matrix=[{1 1},{1,0}]
int main()
{
    ll t;cin>>t;
    while(t--)
    {
    ll n;cin>>n;
    if(n==0||n==1)
    {
        if(n==0)
        cout<<n<<endl;
        else if(n==1)
            cout<<n+1<<endl;
        continue;
    }
    ll x=fib(n+3);
    cout<<x<<endl;

    }
}
