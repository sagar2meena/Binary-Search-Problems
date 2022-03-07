#include"bits/stdc++.h"
using namespace std;
int main()
{  // sumbset sum target problem you have check wether their is a sum exist
//   whose sum equals to target
      vector<int> nums = {4,7,1,3,2};
      int target = 10;
      int m = nums.size()+1;
        int n = target+1;
        vector<vector<bool>> dp(m,vector<bool>(n,false));
        for(int i=0;i<m;i++)
        {
          for(int j=0;j<n;j++)
          {
            if( i==0 && j == 0)
            {
              dp[i][j] = true;
            }else if( i == 0)
            {
              dp[i][j] = false;
            }else if(j == 0)
            {
              dp[i][j] = true;
            }
            else{
              if(dp[i-1][j] == true)
              {
                dp[i][j] = true;
              } else 
              {
                int val = nums[i-1];
                if( j >= val)
                {
                  if(dp[i-1][j-val] == true)
                  {
                    dp[i][j] = true;
                  }
                }
              }
            } 
          }
        }
      cout<<dp[m-1][n-1];
return  0;
}