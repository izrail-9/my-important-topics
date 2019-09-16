#include<bits/stdc++.h>
using namespace std;
int ajdeceny()
{
    int a,b;cin>>a>>b;
    vector<set<int>>v(a+1);
    for(int i=0;i<b;i++)
    {
        int c,d;cin>>c>>d;
        v[c].insert(d);
    }
    int q;cin>>q;
    for(int i=0;i<q;i++)
    {
        int x,y;cin>>x>>y;
        auto it=v[x].find(y);
        if(it!=v[x].end())
            cout<<"Yeh"<<endl;
        else
            cout<<"sorry"<<endl;
    }

}
