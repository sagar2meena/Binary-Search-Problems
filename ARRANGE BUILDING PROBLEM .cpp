#include"bits/stdc++.h"
using namespace std;
// Given an Integer n represent length of road , contain on both side
// n road , arrange building in such a way no two building are build in adjacent
int main()
{
  int n = 5;
  vector<vector<int>> dp(2,vector<int>(n+1,0));
  dp[0][1] = 1;
  dp[1][1] = 1; 
  for(int i=2;i<=n;i++)
  {
     dp[0][i] = dp[1][i-1];
     dp[1][i] = dp[0][i-1]+dp[1][i-1];   
  }
  cout<<dp[0][n]+dp[1][n]<<" ";
  return 0;
}