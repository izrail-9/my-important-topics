// find minimum money to buy x kg; where repetition is allowed 

#include<bits/stdc++.h>
#define PB push_back
using namespace std;
typedef long long ll;
int main()
{
     ll t;
     int temp = scanf("%lld",&t);
     while(t--)
        {
          ll n,k;
          temp = scanf("%lld%lld",&n,&k);
          vector<ll> apple,price;
          for(ll i=1;i<=k;i++){
               ll check;
               temp=scanf("%lld",&check);
               if(check!=-1){
                    apple.PB(i);
                    price.PB(check);
               }
          }
          ll dp[apple.size()+1][k+1];
          for(ll i=0;i<apple.size()+1;i++)
          {
               dp[i][0] = 0;
          }
          for(ll i=0;i<k+1;i++)
          {
               dp[0][i] = 1000000;
          }
          for(ll i=1;i<apple.size()+1;i++){
               for(ll j=1;j<k+1;j++){
                    if(j >= apple[i-1]){
                         dp[i][j] = min(dp[i-1][j],price[i-1]+dp[i][j-i]);
                    }
                    else dp[i][j] = dp[i-1][j];
               }
          }
  // TRY PRINTING THE WHOLE DP TABLE !
  //for(ll i=0;i<apple.size()+1;i++){
  //     for(ll j=0;j<k+1;j++){
  //            cout<<dp[i][j]<<" ";
  //     }
  //     cout<<"\n";
  //}

          if(dp[apple.size()][k] == 1000000) printf("-1\n");
          else printf("%lld\n",dp[apple.size()][k]);
     }
}
