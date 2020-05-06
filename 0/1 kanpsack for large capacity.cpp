#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 10000000000
int main()
{
    ll n,cap,max_val=0;cin>>n>>cap;
    ll v[n+1],w[n+1];
    for(ll i=1;i<=n;i++)
    {
        cin>>w[i]>>v[i];
        max_val+=v[i];
    }
    ll dp[n+1][max_val+1];
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=max_val;j++)
            dp[i][j]=INF;
    }
    for(ll i=0;i<=n;i++)
        dp[i][0]=0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=max_val;j++)
        {
            if(v[i]<=j)
                dp[i][j]=min((w[i]+dp[i-1][j-v[i]]),dp[i-1][j]);
            else
               dp[i][j]=dp[i-1][j];
        }
    }
    ll ans=0;
    for(ll i=1;i<=max_val;i++)
    {
        if(dp[n][i]<=cap)
            ans=max(ans,i);
    }/*
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=max_val;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }*/
    cout<<ans<<endl;
}
