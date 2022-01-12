#include"bits/stdc++.h"
using namespace std;
// AGRESSIVE COWS
bool can_place( int arr[] , int n , int dist , int c )
{
    int cow_l = arr[0];
    int count = 1;
    for( int i=1;i<n;i++)
    {
        if(arr[i] - cow_l >= dist)
        {
            count++;
            cow_l = arr[i];
        }
        if(count == c)
            return true;
    }
    return false;
}
int larg_min( int arr[] , int n , int c)
{
    sort(arr , arr+n);
    int l = 1;
    int h = arr[n-1] - arr[0]; // dist
    int res = 0;
    while(l<=h)
    {
        int mid = (l + h)/2;
        if(can_place( arr , n , mid , c))
        {
            res = mid;
            l = mid+1;
        }else
        {
            h = mid-1;
        }
    }
    return res;
}
int main()
{    int arr[] = {1,5,7,9,10,34};
	 int c = 3;
     int n = sizeof(arr)/sizeof(arr[0]);
     cout<<larg_min( arr, n ,c);
     return 0;
}

 