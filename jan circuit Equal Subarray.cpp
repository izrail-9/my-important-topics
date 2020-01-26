problem link:-https://www.hackerearth.com/practice/data-structures/advanced-data-structures/segment-trees/practice-problems/algorithm/equal-subarrays-cf01a26a/

#include "bits/stdc++.h"
using namespace std;
#define ll long long int
int segment_tree[1000000];
long long int A[100005];
int build(int start, int end, int node)
{
	if(start == end)
	{
		segment_tree[node] = A[start];
	}
	else
	{
		int mid = (start + end) / 2;
		segment_tree[node] = max(build(start, mid, 2*node + 1), build(mid+1, end, 2*node+2));
	}
	return segment_tree[node];
}
int query(int start, int end, int l, int r, int node)
{
	if(start > r || end < l) return -1;
	if(start >= l && end <= r) return segment_tree[node];
	int mid = (start + end) / 2;
	return max(query(start, mid, l, r, 2*node+1), query(mid+1, end, l, r, 2*node+2));
}
int main()
{
  ll n,k;cin>>n>>k;
  ll pref[n+1];
  pref[0]=0;
  for(ll i=0;i<n;i++)
  {
    cin>>A[i];
    pref[i+1]=pref[i]+A[i];
  }
  build(0,n-1,0);
 /* for(int i=0;;i++)
  {
      int l,r;cin>>l>>r;
      cout<<query(0,n-1,l,r,0)<<endl;
  }*/
  ll b=0;
  for(ll i=0;i<n;i++)
  {
     /* for(ll j=n-1;j>=i;j--)
      {
          ll mx=query(0,n-1,i,j-1,0);
          ll S_sum=mx*(j-i+1);
          ll a_sum=pref[j+1]-pref[i];
          if(abs(S_sum-a_sum)<=k)
          {
              b=max(b,j-i+1);
          }
      */
      ll start=i,end=n-1,mid;
      while(start<=end)
      {

          ll mid=(start+end)/2;
          ll mx=query(0,n-1,i,mid,0);
           ll S_sum=mx*(mid-i+1);
          ll a_sum=pref[mid+1]-pref[i];
           if(abs(S_sum-a_sum)<=k)
          {
              b=max(b,mid-i+1);
              start=mid+1;
          }
          else
            end=mid-1;
      }
  }
  cout<<b<<endl;
}
