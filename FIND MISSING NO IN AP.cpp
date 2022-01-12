#include"bits/stdc++.h"
using namespace std;
int mis_numAP( vector<int> arr,int n, int l ,int h , int d)
{
    if(h<=l)
    {
        return -1;
    }
    int mid = l+(h-l)/2;

    if(mid<n && (arr[mid+1] - arr[mid]) != d)
    {
        return arr[mid] + d;
    }

    if(mid>0 && (arr[mid] - arr[mid-1]) != d)
    {
        return arr[mid]-d;
    }

    if(arr[mid] == arr[0] + mid*d)
    {
         return mis_numAP( arr, n, mid+1 ,h , d);
    }
    else{
        return mis_numAP( arr, n , l , mid-1 , d);
    }

}
int main()
{ 
    vector<int> arr = {2,4,6,8,12,14};
    int n = arr.size();
    int d = (arr[n-1]-arr[0])/n;
    cout<<mis_numAP( arr , n , 0 , n-1 , d)<<endl;
    return 0;
}