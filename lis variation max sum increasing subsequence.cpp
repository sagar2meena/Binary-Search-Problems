#include"bits/stdc++.h"
using namespace std;
// maximum sum increasing subsequence
int main()
{
  vector<int> arr = {10,22,9,33,21,50,41,60,80,1};
  int n = arr.size();
  vector<int> dp(n);
  dp[0] = arr[0];
  int ans = 0;
  for(int i=0;i<n;i++)
  {
    int max_sum = 0;
    for(int j=0;j<i;j++)
    {
      if(arr[i]>arr[j])
      {
        max_sum = max(max_sum,dp[j]);
      }
    }
    dp[i] = max_sum+arr[i];
    ans = max(ans,dp[i]);
  }
  cout<<ans;
  return 0;
}