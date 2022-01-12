#include"bits/stdc++.h"
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for( int i=0;i<n;i++)
   {
       cin>>arr[i];
   }

   map<int,int> mp;
   int prefsum = 0;
   for( int i=0;i<n;i++)
   {
       prefsum += arr[i];
       mp[prefsum]++;
   }
   int ans = 0;
   for( auto it = mp.begin();it!= mp.end();it++)
   {
       int c = it->second;

       ans += (c*(c-1))/2;

       if(it->first == 0)
       {
           ans += it->second;
       }
   }
   cout<<ans;
   return 0;
}
