#include"bits/stdc++.h"
using namespace std;
int find_Triplet( int arr[] , int n , int sum){
  int ans = 0;
  sort(arr, arr + n);
  for( int i=0;i<n-2;i++)
  {
    int l = i+1 , r = n-1;
    while(l<r)
    {
      if(arr[i]+arr[l]+arr[r] >= sum)
      {
        r--;
      }
      else{
        ans += (r-l);
        l++;
      }
    }
  }
  return ans;
}
 int main()
 {
   int arr[] = {5,1,3,4,7};
   int n =sizeof(arr)/sizeof(arr[0]);
   int sum = 9;
   cout<<find_Triplet( arr, n , sum)<<endl;
   return 0;
 }
 