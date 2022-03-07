#include"bits/stdc++.h"
using namespace std;
// Matrix chain multiplication
// minimise the operation
int main()
{ // A = 10*20 , B = 20*30 , C = 30*40 , D = 40*50 , E = 50*60
  int arr[] = {10,20,30,40,50,60};
  int n = sizeof(arr)/sizeof(arr[0]);
  vector<vector<int>> dp(n-1,vector<int>(n-1));
  for(int g=0;g<n-1;g++)
  {
    for(int i=0,j=g;j<dp.size();i++,j++)
    {
       if(g == 0)
       {
         dp[i][j] = 0;
       }else if(g == 1)
       {
          dp[i][j] = arr[i]*arr[j]*arr[j+1];
       }else{
           int mini = INT_MAX;
           for(int k=i;k<j;k++)
           {
              int  lc = dp[i][k];
              int rc = dp[k+1][j];
              int mc = arr[i]*arr[k+1]*arr[j+1];
              mini = min(mini,lc+rc+mc);
           }
           dp[i][j] = mini;
       }
    }
  }
  cout<<dp[0][n-2];
  return 0;
}