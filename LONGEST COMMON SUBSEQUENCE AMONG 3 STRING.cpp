
#include"bits/stdc++.h"
using namespace std;
// longest common subsequence among 3 string 
int dp[205][205][205];
int lcs(string s1,string s2,string s3 , int n , int m ,int l)
{
   if( n == s1.length() || m == s2.length() || l == s3.length())
   {
     return 0;
   }
   if(dp[n][m][l] != -1)
   {
     return dp[n][m][l];
   }
   if(s1[n] == s2[m] && s2[m] == s3[l])
   {
      dp[n][m][l] = 1+lcs(s1,s2,s3,n+1,m+1,l+1);
   }else{
      dp[n][m][l] = max(lcs(s1,s2,s3,n,m,l+1),max(lcs(s1,s2,s3,n+1,m,l),lcs(s1,s2,s3,n,m+1,l)));  
   }
   return dp[n][m][l];
}

int main()
{
      string text1 = "glakgdmgbdslc";
      string text2 = "anxvbsdlc";
      string text3 = "pqrxabcswd";
      for(int i=0;i<205;i++)
      {
         for(int j=0;j<205;j++)
        {
            for(int k=0;k<205;k++)
            {
               dp[i][j][k] = -1;
            }
        }
      }
      cout<<lcs(text1,text2,text3,0,0,0);
  
  return 0;
}