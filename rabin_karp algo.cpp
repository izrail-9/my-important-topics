#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int p = 31;
const int m = 1e9 + 9;
vector<long long> p_pow(100005);
vector<long long> h(100005,0);
void precal()
{
      p_pow[0] = 1;
    for (int i = 1; i < (int)p_pow.size(); i++)
        p_pow[i] = (p_pow[i-1] * p) % m;
}
void prehash(string & t)
{
     int T = t.size();
     for (int i = 0; i < T; i++)
        h[i+1] = (h[i] + (t[i] - 'a' + 1) * p_pow[i]) % m;
}
bool  rabin_karp(string & s,string & t)
{
    int S = s.size();int T = t.size();
    long long h_s = 0;
    for (int i = 0; i < S; i++)
        h_s = (h_s + (s[i] - 'a' + 1) * p_pow[i]) % m;

    vector<int> occurences;
    for (int i = 0; i + S - 1 < T; i++)
    {
        long long cur_h = (h[i+S] + m - h[i]) % m;
        if (cur_h == h_s * p_pow[i] % m)
        {
            occurences.push_back(i);
        }
    }
   // return occurences;
   if(occurences.size()>0)
    return true;
   return false;
}
int main()
{
    precal();
   string s,s1;
   cin>>s;
   prehash(s);
   int q;cin>>q;
   while(q--)
   {
       string s1;cin>>s1;
       if(rabin_karp(s1,s))
        cout<<"Y"<<endl;
       else
        cout<<"N"<<endl;
   }
}
