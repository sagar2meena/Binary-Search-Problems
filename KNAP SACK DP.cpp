# include "bits/stdc++.h"
using namespace std;
// dp memoization
// int knap_sack(int n,vector<int> &v,vector<int> &w,int W,vector<vector<int>> &dp)
// {
//    if(n <= 0 || W <= 0)
//    {
//      return 0;
//    }
//    if(dp[n][W] != -1)
//    {
//      return dp[n][W];
//    }
//    if(w[n-1]>W)
//    {
//      dp[n][W] =  knap_sack(n-1,v,w,W,dp);
//    }else{
//     dp[n][W] = max(knap_sack(n-1,v,w,W-w[n-1],dp)+v[n-1],knap_sack(n-1,v,w,W,dp)); 
//    }
//    return dp[n][W];
// }
// optimsed approach Dynamic programming
int main()
{
  int n = 5;
  vector<int> v = {15,14,10,45,30};
  vector<int> w = {2,5,1,3,4};
  int W = 7;
  // vector<vector<int>> dp(n+1,vector<int>(W+1,-1));
  // cout<<knap_sack(n,v,w,W,dp);
  vector<vector<int>> dp(n+1,vector<int>(W+1));
  for(int i=0;i<=n;i++)
  {
     for(int j=0;j<=W;j++)
     {
       if(i == 0)
       {
         dp[i][j] = 0;
       }else if(j == 0)
       {
         dp[i][j] = 0;
       }else{
         dp[i][j] = dp[i-1][j];
         if(j>=w[i-1])
         {
           dp[i][j] = max(dp[i][j],v[i-1]+dp[i-1][j-w[i-1]]);
         }
       }
     }
  } 
   cout<<dp[n][W];
  return 0;
}