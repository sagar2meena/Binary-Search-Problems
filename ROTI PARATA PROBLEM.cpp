#include"bits/stdc++.h"
using namespace std;
bool Is_feasible( int *arr ,int m , int parata , int time)
{
     int count_par = 0;
    int cur_time = 0;

    for(int i=0;i<=m;i++)
    {
        cur_time = arr[i];
        int j = 2;
        while(cur_time<=time)
        {
            cur_time += arr[i]*j;
            count_par++;
            j++;
        }
         if(count_par>=parata) return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int m;
        cin>>m;
        int arr[m];
        for( int i=0;i<m;i++)
       {
          cin>>arr[i];
       }
       int lb = 0;
       int ub = 1e8;
       int ans;
       while(lb<ub)
       {
           int mid = (lb+ub)>>1;
           if(Is_feasible( arr, m , n , mid))
           {
               ans = mid;
               ub = mid -1;
           }
           else
           {
               lb = mid+1;
           }
       }
       cout<<ans<<endl;
    }
    return 0;
}