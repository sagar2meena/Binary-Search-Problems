#include"bits/stdc++.h"
using namespace std;
// Given an Integer n and Integer k , find the number of ways to paint 
// the n fence such that no two adjacent fence have same color   
int main()
{
  int n = 8; // no of fence
  int k = 3; // no of colors
  int dp[n+1][3]; 
  // dp[n][0] =>  no of ways when last fence have same color
  // dp[n][1] => no of ways when last fence have diff color
  // dp[n][2] => total no ways
  // dp[2][0] = k*1;
  // dp[2][1] = k*(k-1);
  // dp[2][2] = dp[2][0]+dp[2][1];
  // for(int i=3;i<=n;i++)
  // {
  //   for(int j=0;j<3;j++)
  //   {
  //        if(j == 0) // last two fence have gone to be same color
  //        {
  //          dp[i][j] = dp[i-1][j+1];  
  //        }else if(j == 1) //last fence have gone to be diff color
  //        {
  //           dp[i][j] = dp[i-1][j+1]*(k-1);
  //        }else{
  //           dp[i][j] = dp[i][j-1]+dp[i][j-2];
  //        }
  //   }
  // }
  int same = k;
  int diff = k*(k-1);
  int total = same + diff;
  for(int i=3;i<=n;i++)
  {
    same = diff;
    diff = total*(k-1);
    total = same + diff;
  }
  cout<<total;
  cout<<d[n][2];
  return 0;
}