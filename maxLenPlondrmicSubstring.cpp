#include<bits/stdc++.h>
using namespace std;
	int LPS(string s)
	{
		  int n = s.length();
		  int palindromeBeginsAt = 0; //index where the longest palindrome begins
		  int max_len = 1;//length of the longest palindrome
		  bool palindrome[n][n]; //boolean table to store palindrome truth

		  //Trivial case: single letter palindromes
		  for (int i = 0; i < n; i++) {
			  palindrome[i][i] = true;
		  }

		  //Finding palindromes of two characters.
		  for (int i = 0; i < n-1; i++) {
		    if (s[i]== s[i+1])
                {
		      palindrome[i][i+1] = true;
		      palindromeBeginsAt = i;
		      max_len = 2;
		    }
		  }
		  //Finding palindromes of length 3 to n and saving the longest
		  for (int curr_len = 3; curr_len <= n; curr_len++) 
		  {
		    for (int i = 0; i < n-curr_len+1; i++) {
		      int j = i+curr_len-1;
		      if (s[i] == s[j] //1. The first and last characters should match
		    	  && palindrome[i+1][j-1]) //2. Rest of the substring should be a palindrome
		      {
		    	palindrome[i][j] = true;
		        palindromeBeginsAt = i;
		        max_len = curr_len;
		      }
		    }
		  }
		  return(max_len);
		}
	int main()
	{
	   string s;cin>>s;
	   cout<<LPS(s);
	}
