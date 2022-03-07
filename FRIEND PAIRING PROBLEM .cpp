#include"bits/stdc++.h"
using namespace std;
// friend pairing problem 
int main()
{
  int n = 4;
  vector<int> dp(n+1);
  dp[0] = 1;
  dp[1] = 1;
  for(int i=2;i<=n;i++)
  {
    // each element has two option consider single or pair with other
    dp[i] = dp[i-1]+dp[i-2]*(i-1);
  }
  cout<<dp[n];
  return 0;
}