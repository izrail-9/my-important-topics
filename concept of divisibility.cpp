/*Sumita and equal array
Sumita is playing with a Array A of size N. she wants to make all the values of A to be equal. she can multiply any value any number of times by X, Y and Z. Your task is to tell her whether she can do it or not. Print "She can" if she can do it else print "She can't" without ""

Input :

First line of the input will contain T (No. of test cases).
For each test case, first line will contain four space separated integers denoting N, X, Y and Z.
Then next line will contain N space separated integers of A
Output :

For every test case, print the required answer in a new line.
Constraints :

1 = T = 5
2 = N = 10^5
X, Y, Z ? {2, 3, 5, 7}
1 = Ai = 10^9
SAMPLE INPUT 
2
2 2 2 2
2 4
3 2 3 2
2 6 7
SAMPLE OUTPUT 
She can
She can't
//
*/
#include<iostream>
#define ll long long int
using namespace std;
int main()
{  ll t;
cin>>t;
    while(t--)
{
    ll n,x,y,z;
    cin>>n>>x>>y>>z;
    ll arr[n];
    for(ll i=0;i<n;i++)
 {
     cin>>arr[i];
     while(arr[i]%x==0)
     arr[i]/=x;
    while(arr[i]%y==0)
     arr[i]/=y;
          while(arr[i]%z==0)
     arr[i]/=z;
 } int flag=0;
for(ll i=0;i<n;i++)
{
    if(arr[i]!=arr[0])
    {flag=1;break;}
}
  if(flag==0)
  cout<<"She can"<<endl;
  else
  cout<<"She can't"<<endl;
}
}
