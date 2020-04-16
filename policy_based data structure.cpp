#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>
int main()
{
    ordered_set s;
    ll n,m;cin>>n>>m;
    for(ll i=0;i<n;i++)
    {
        ll a;cin>>a;
        s.insert(a);
    }
    for(ll i=0;i<m;i++)
    {
        ll a;cin>>a;
        ll k=s.order_of_key(a+1);
        cout<<k<<" ";
    }

}
