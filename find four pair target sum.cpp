/ SORTING ALGORITHMS//
#include"bits/stdc++.h"
using namespace std;
void four_sum( int arr[] , int n , int  k)
{
  unordered_map<int , pair<int , int>> mp;
  for( int i=0;i<n-1;i++)
  {
      for( int j=i+1 ; j<n;j++)
      {
           mp[arr[i] + arr[j]] = {i,j};
      }

  }
  for( int i=0;i<n-1;i++)
  {
      for( int j=i+1 ; j<n;j++)
      {
          int sum = arr[i] + arr[j];
          if( mp.find(k - sum) != mp.end())
          {
            pair<int,int> p = mp[ k - sum] ;
            if( p.first != i && p.second != j && p.first != j && p.second != i){
              cout<<i<<" "<<j<<" "<<p.first<<" "<<p.second<<endl;
              return ;
            }
          }
      }

  }
}
 int main()
 {
   int arr[] = {10,20,30,100,234,65678,432,2456,890};
   int k =950;
   int n = sizeof(arr)/sizeof(arr[0]);
   four_sum( arr, n , k);
   return 0;
 }