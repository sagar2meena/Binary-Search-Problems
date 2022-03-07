#include"bits/stdc++.h"
using namespace std;
// Paint House Problem II // 
int main()
{
  int n = 6;
  int c = 4;
  vector<vector<int>> arr = {{1,5,3,1},{5,8,2,2},{7,4,9,4},{2,3,7,9},{3,6,2,1},{4,1,3,7}};
  int dp[n][c];
  int least = INT_MAX;
  int sleast = INT_MAX;
  for(int i=0;i<c;i++)
  {
    dp[0][i] = arr[0][i];
    if(dp[0][i] <= least)
    {
        sleast = least;
        least = dp[0][i];
    }else if(dp[0][i] <= sleast)
    {
       sleast = dp[0][i];
    }
  }
 
  for(int i=1;i<n;i++)
  {
    int nleast = INT_MAX;
    int nsleast = INT_MAX;
    for(int j=0;j<c;j++)
    {
       if(dp[i-1][j] == least)
       {
          dp[i][j] = sleast + arr[i][j];
       }else{
         dp[i][j] = arr[i][j] + least;
       }

       if(dp[i][j] <= nleast)
       {
           nsleast = nleast;
           nleast = dp[i][j];
       }else if(dp[i][j] <= nsleast)
       {
           nsleast = dp[i][j];
       }
    }
    least = nleast;
    sleast = nsleast;
  }

  cout<<least;
  return 0;
}