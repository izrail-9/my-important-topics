#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;cin>>a>>b;
    vector<vector<int>>v(a+1);
    for(int i=0;i<b;i++)
    {
        int c,d;cin>>c>>d;
        v[c].push_back(d);
        v[d].push_back(c);
    }
    int visited[10+1]={0};
    queue<int>q;
    vector<int>x;
    q.push(1);
    visited[1]=1;
    int level[11]={0};
    level[1]=0;
    x.push_back(1);
    while(!q.empty())
    {
      int d=q.front();
      q.pop();
      for(int i=0;i<v[d].size();i++)
      {
        if(visited[v[d][i]]!=1)
        {
            q.push(v[d][i]);
            visited[v[d][i]]=1;
            x.push_back(v[d][i]);
            level[v[d][i]]=level[d]+1;
        }
     }
    }
    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=10;i++)
        cout<<level[i]<<" ";
}
