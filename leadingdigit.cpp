///Binary Exponentiation
#include <bits/stdc++.h>
using namespace std;
#define INF 1<<30
#define MAX 10005
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
typedef long long ll;

// compute x^n mod m
ll binpow(ll a, ll b, ll m = 1000)
{
    a %= m;
    ll res = 1;
    while(b > 0)
    {
        if(b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}


void printLastdigit(ll a, ll b, ll k)
{
    ll tmp = binpow(a, b, k);
        printf("%03lld", tmp);
        //cout << "..."<< tmp<<endl;
}


int main()
{
    //FASTIO
    ///*
    //double start_time = clock();
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    //*/

    int t;
    cin >> t;
    while(t--)
    {
        ll x, y, m;
        cin >> x >> y;
        m = 1000;
        double a = y * log10(x);
        double b = floor(pow(10, a - floor(a) + 3 - 1) ) ;
        cout << b << "...";
        printLastdigit(x, y, m);
        cout << endl;
    }

    //double end_time = clock();
    //printf( "Time = %lf ms\n", ( (end_time - start_time) / CLOCKS_PER_SEC)*1000);

    return 0;
}
