#include"bits/stdc++.h"
using namespace std;
// longest common subsequence 
int main()
{
      string text1 = "pqabcxy";
      string text2 = "xyzabcp";
      int n = text1.length(),m = text2.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1));
        for(int i=n;i>=0;i--)
        {
          for(int j=m;j>=0;j--)
          {
            if(i == n || j == m)
            {
              dp[i][j] = 0;
            }else{
              if(text1[i] == text2[j]) // lcs(s1,s2) = lcs[res1,res2]+1 , c1 == c2 
              {
                dp[i][j] = dp[i+1][j+1]+1;
              }else{ // lcs(s1,s2) = max(lcs(s1,res2),lcs(res1,s2))
                dp[i][j] = max(dp[i+1][j],dp[i][j+1]);
              }
            }  
          }
        }

        int i = 0, j=0;
        string s;
        while(i<n && j<m)
        {
           if(text1[i] == text2[j])
           {
             s.push_back(text1[i]);
             i++;
             j++;
           }else if(dp[i+1][j]>dp[i][j+1])
           {
             i++;
           }else{
             j++;
           }
        }
  cout<<s;
  return 0;
}