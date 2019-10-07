#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int T;
cin>> T;
while(T--)
{   int n,a;
    cin >> n >> a;
    int arr[n];
    for(int d=0;d<n;d++)
      cin >>arr[d];
      int flag = 0;
    for(int i=1;i<pow(2,n);i++)
      {
        int g=i,h=n-1;
        int sum_notes = 0;
        while(g>0)
        {
            if(g&1)
            sum_notes = sum_notes + arr[h];
            g=g>>1;
            //add no from arr corresponding to set bits
            h--;
        }
        if(sum_notes == a){
          std::cout << "Yes" << '\n';
          flag = 1;
          break;
        }
      }
    if(flag == 0)
      cout << "No" << '\n';
}
return 0;
}
