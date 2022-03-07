#include"bits/stdc++.h"
using namespace std;
// count the no of binary string with consecutives 0's
// count ther no of binary string with consecutives 1's
int func_no_cun_0(int n)
{
  vector<vector<int>> dp(2,vector<int>(n+1,0));
  //    0 1 2 3 4 5 6
  // 0  0 1 1 2 3 5 8         // store the count of appropriate binary string ending at 0 of len index
  // 1  0 1 2 3 5 8 13  total = 8+13 = 21 binary String
  dp[0][1] = 1;
  dp[1][1] = 1; 
  for(int i=2;i<=n;i++)
  {
     dp[0][i] = dp[1][i-1];
     dp[1][i] = dp[0][i-1]+dp[1][i-1];   
  }
  cout<<dp[0][n]<<" ";
  return dp[0][n]+dp[1][n];
}

int func_no_cun_1(int n)
{
  int bse0 = 1;
  int bse1 = 1;
  int prev = 0;
  for(int i=2;i<=n;i++)
  {
    prev = bse0;
    bse0 = bse0+bse1;
    bse1 = prev;
  }
  return bse0+bse1;
}
int main()
{
  int n = 6;
  cout<<func_no_cun_0(n)<<" ";
  cout<<func_no_cun_1(n);
  return 0;
}