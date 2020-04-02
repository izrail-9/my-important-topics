q_link=https://codeforces.com/contest/1311/problem/C
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n,m;cin>>n>>m;
        char a[n+1];
        int arr[n+1];
        memset(arr,0,sizeof(arr));
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=m;i++)
        {
            int r;cin>>r;
            arr[1]+=1;
            if(r+1<=n)
                arr[r+1]+=-1;
        }
       // for(int i=1;i<=n;i++)
       //     cout<<arr[i]<<" ";
        map<char,int>mp;
         int presum[n+1];
         memset(presum,0,sizeof(presum));
         presum[1]=arr[1];
        for(int i=2;i<=n;i++)
        {
            //mp[a[i]]+=mp[a[i-1]]+arr[i];
           presum[i]=presum[i-1]+arr[i];
        }
      //  cout<<endl;
        //for(int i=1;i<=n;i++)
        //    cout<<presum[i]<<" ";
        //  cout<<endl;
        for(int i=1;i<=n;i++)
        {
            mp[a[i]]+=presum[i]+1;

        }
        for(char i='a';i<'a'+26;i++)
        {
            cout<<mp[i]<<" ";
        }
        cout<<endl;
    }

}
