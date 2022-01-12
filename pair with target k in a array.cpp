// SORTING ALGORITHMS//
#include"bits/stdc++.h"
using namespace std;
void Find_Pair( int arr[] , int n , int k)
{   
    sort( arr, arr+n);
    int i = 0 , j=1;
    while(i<n && j<n){
      if(   abs(arr[i]-arr[j]) ==  k)
      {
          cout<<" index : "<<i<<" "<<j<<"  ";
          return ;
      }else if(abs(arr[i]-arr[j])<k)
      {
            j++;    
      }else if(abs(arr[i] - arr[j])> k){
        i++;
      }

    }
    cout<<" not find"<<endl;
    return;
      
    }



 int main()
 {
   int arr[] = {3,6,7,8,9,3};
   int k =2;
   int n = sizeof(arr)/sizeof(arr[0]);
   Find_Pair( arr, n ,k);
 }