#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll lis(ll arr[],ll n)
{
    set<ll>s;
    set<ll>:: iterator k;
    for(ll i=0;i<n;i++)
    {
        if(s.insert(arr[i]).second)
        {
            k=s.find(arr[i]);
            k++;
            if(k!=s.end())
                s.erase(k);
        }
    }
    return s.size();
}
int main()
{
    ll n;cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
   cout<<lis(arr,n);

}
