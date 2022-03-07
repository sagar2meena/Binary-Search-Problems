#include"bits/stdc++.h"
using namespace std;
 // longest repeating subsequece
int main()
{         
	    string s = "abacbc";
		int n = s.length();
        vector<vector<int>> dp(n+1,vector<int>(n+1));
        for(int i=n;i>=0;i--)
        {
          for(int j=n;j>=0;j--)
          {
            if(i == n || j == n)
            {
              dp[i][j] = 0;
            }else{
              if(s[i] == s[j] && i!=j) // lcs(s1,s2) = lcs[res1,res2]+1 , c1 == c2 
              {
                dp[i][j] = dp[i+1][j+1]+1;
              }else{ // lcs(s1,s2) = max(lcs(s1,res2),lcs(res1,s2))
                dp[i][j] = max(dp[i+1][j],dp[i][j+1]);
              }
            }  
          }
        }
		cout<<dp[0][0];
  return 0;
}