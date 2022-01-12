#include"bits/stdc++.h"
using namespace std;
int find( int arr[] , int brr[] ,int n , int m , int k)
{
    if(n>m)
    {
        return find( brr, arr,  m , n , k);
    }
    int l = max(0,k-m) , h = min(k , n);
    while(l<=h)
    {
        int cut1 = (l+h)>>1;
        int cut2 = k - cut1;
        int l1 = (cut1 == 0 ? INT_MIN : arr[cut1-1]);
        int l2  = ( cut2 == 0 ? INT_MIN : arr[cut2-1]);
        int r1 = (cut1 == n ? INT_MAX : arr[cut1]);
        int r2 = (cut2 == m ? INT_MAX : arr[cut2]);

        if(l1 <= r2 && l2 <= r1)
        {
            return max(l1,l2);
        }
        else if( l1 > r2)
        {
             h = cut1-1;
        }else
        {
            l = cut1+1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,3,4,7,10,12};
    int brr[] = {2,3,6,15};
    cout<<find( arr ,brr , 6, 4, 5);
    return 0;
}