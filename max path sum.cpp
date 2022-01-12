#include"bits/stdc++.h"
using namespace std;
// DOUBLE HELIX SPOJ PROBLEM
int long_path( int arr[] , int n , int brr[] , int m)
{
   int s1 = 0;
   int s2 = 0;
   int path_sum = 0;
   int i = 0 , j = 0;
   while(i<n && j<m)
   {
      if(arr[i]<brr[j])
      {
        s1 += arr[i];
        i++;
      }
      else if (brr[j]>arr[i]) {
        s2 += brr[j];
        j++;
      }
      else{
        path_sum += arr[i] + max(s1,s2);
        s1 = 0;
        s2 = 0;
        i++;
        j++;
      }
   }
   while(i<n)
   {
     s1 += arr[i];
     i++;
   }
   while(j<m)
   {
     s2 += brr[j];
     j++;
   }
   path_sum = path_sum + max(s1,s2);
   return path_sum;
}
int main()
{
  int n = 4;
  int arr[n];
  for(int i=0;i<n;i++)
      cin>>arr[i];
  int m = 3;
  int brr[m];
  for( int i=0;i<m;i++)
      cin>>brr[i];
  cout<<long_path( arr , n , brr , m);
  return 0;
}