#include"bits/stdc++.h"
using namespace std;
 int utilfunc(string &s1,string &s2,int n,int m,vector<vector<int>> &dp,int k)
    {
      if(n == 0 || m == 0)
      {
        return 0;
      }  
      if(dp[n][m] != -1)
      {
        return dp[n][m];
      }
       int l =0, r=0, s=0;
      if(s1[n-1] == s2[m-1])
      {
        l  = utilfunc(s1,s2,n-1,m-1,dp,k)+1;
      }

      if(k>0)
      {
        r = utilfunc(s1,s2,n-1,m-1,dp,k-1)+1;
      }
      s = max(utilfunc(s1,s2,n,m-1,dp,k),utilfunc(s1,s2,n-1,m,dp,k));
      return dp[n][m] = max(l,max(r,s));
    }
int main()
{
       
      string text1 = "abcdeskfjdsfkds";
      string text2 = "abcexkafff";
      int n = text1.length();
      int m = text2.length();
       int k = 3;
      vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
      cout<<utilfunc(text1,text2,n,m,dp,k);
  return 0;
}