#include"bits/stdc++.h"
using namespace std;
// PAINT HOUSE PROBLEM   // 
int main()
{
   int n = 4;
   int c = 3;
   int arr[n][c];
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<c;j++)
     {
       cin>>arr[i][j];
     }
   }

   long dp[n][c];
   dp[0][0] = arr[0][0];
   dp[0][1] = arr[0][1];
   dp[0][2] = arr[0][2];
   for(int i=1;i<n;i++)
   {
     for(int j=0;j<c;j++)
     {
        dp[i][j] = min(dp[i-1][(j+1)%c],dp[i-1][(j+2)%c])+arr[i][j];
        cout<<dp[i][j]<<" ";
     }
     cout<<endl;
   }
   long ans = INT_MAX;
   for(int i=0;i<c;i++)
   {
     ans = min(ans,dp[n-1][i]);
   }
   cout<<"min cost"<<ans;
  return 0;
}