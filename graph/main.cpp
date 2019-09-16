#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;cin>>a>>b;
    int arr[a+1][a+1];
    for(int i=0;i<b;i++)
    {
        int c,d;cin>>c>>d;
        arr[c][d]=1;
        arr[d][c]=1;
    }
    int q;cin>>q;
    for(int i=0;i<q;i++)
    {
        int x,y;cin>>x>>y;
        if(arr[x][y]==1)
            cout<<"Yah"<<endl;
        else
            cout<<"sorry"<<endl;
    }
}
