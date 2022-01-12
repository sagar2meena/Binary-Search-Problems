#include"bits/stdc++.h"
 using namespace std;
// Allocate board in such a way each painter get minimum  number of boards
int findfeasible( int boards[] , int n ,int limits)
{
    int  s = 0, painter = 1;
    for( int i=0;i<n;i++)
    {
        s += boards[i];
        if( s > limits)
        {
            s = boards[i];
            painter++;
        }
    }
    return painter;
}
int painterPartition( int boards[] , int n , int m)
{
   
    int l = INT_MAX , sum = 0;
    for( int i=0;i<n;i++)
    {
        l = min(l,boards[i]);
        sum += boards[i];
    }
    int h = sum;
    while(l<=h)
    {
        int mid = l+(h-l)/2;
        int painter = findfeasible( boards , n , mid);
        if(painter <= m)
        {
            h = mid - 1 ;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}

 int main()
 {  
    int arr[] = {10,20,30,40};
    int m  = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<painterPartition( arr, n , m);
    cout<<"\n";
    return 0;
 }