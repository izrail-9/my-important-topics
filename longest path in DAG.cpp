#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
vector<vector<ll>>v(100002);
ll dp[100002];
ll dfs(ll a)
{
    ll res=0;
    for(ll i=0;i<v[a].size();i++)
    {
        if(dp[v[a][i]]==-1)
        {
            dp[v[a][i]]=dfs(v[a][i]);
        }
        res=max(res,dp[v[a][i]]+1);
    }
    return res;
}
int main()
{
    ll n,m;cin>>n>>m;
    //vector<vector<ll>>v(m+1);
    memset(dp,-1,sizeof(dp));
    for(ll i=1;i<=m;i++)
    {
        ll a,b;cin>>a>>b;
        v[a].push_back(b);
    }
   /* for(ll i=1;i<=n;i++)
    {
        for(ll j=0;j<v[i].size();j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }*/
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        ans=max(ans,dfs(i));
    }
    cout<<ans<<endl;
}
