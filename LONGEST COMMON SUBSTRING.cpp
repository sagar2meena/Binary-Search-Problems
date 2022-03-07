#include"bits/stdc++.h"
using namespace std;
// longest common substring 
int main()
{
  string s1 = "abcde";
  string s2 = "abcdeab"; // abc is longest common substring
  int n = s1.length();
  int m = s2.length();
  vector<vector<int>> dp(n+1,vector<int>(m+1,0));
  // we are going to find out the longest
  //  common suffix between prefixes of s1 and s2
  int ans = 0;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)
    {
      if(s1[i-1] == s2[j-1]) // if current prefixe of string s1 and s2 suffix match
      {
         dp[i][j] = dp[i-1][j-1]+1;
      }
      cout<<dp[i][j]<<" ";
      ans = max(ans,dp[i][j]);
    }
    cout<<endl;
  }
  cout<<ans;
  return 0;
}