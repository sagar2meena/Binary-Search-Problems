# include"bits/stdc++.h"
using namespace std;
// UNBOUND KNAP SACK PROBLEM
// TIME COMPLEXITY O(W*N)
int main()
{
  int n = 5;
  vector<int> v = {15,14,10,45,30};
  vector<int> w = {2,5,1,3,4};
  int W = 7;
  vector<int> dp(W+1,0);
  dp[0] = 0;
  for(int c = 1;c<=W;c++)
  {
    for(int i=0;i<n;i++)
    {
      if(w[i] <= c)
      {
         dp[c] = max(dp[c],v[i]+dp[c-w[i]]);
      }
    }
  }
  cout<<dp[W];
  return 0;
}