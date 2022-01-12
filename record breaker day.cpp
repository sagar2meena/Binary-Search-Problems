#include"bits/stdc++.h"
using namespace std ;
// #define int max = 10^7;
/*int mxelement( int a , int b){
    if( a < b){
    return b;
    }
    return a;
    
}*/
int main(){
    int n  ;
  
    cout<<"enter number of days"<<endl;
    cin>>n;  
    int arr[n+1];
    arr[n] = -1;
    cout<<"enter number of visiter"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    
    /*   Isyana is given the number of visiters at her local theme park on N consecutive days. The
         number of visiters on i'th day is Vi. A day is record breaking it is satisfied both of the following condition .
         1) Thev number of visiter on the day is strictly larger then the number of visiter on each of the previous day .
         2) Either it is a last day or the number of visiter on the day is strictly larger then the number of visiter on the following day.
         Note :- the very first day could be a record breaking day!

                           arr = { 1 ,2 ,5 ,7, 2, 1}                              } */
    int mx = -1555;
    int ans = 0 ;
    for(int i=0;i<n;i++){
        if((arr[i]>mx) && (arr[i]>arr[i+1])){
         ans++;
         }
         mx = max( mx , arr[i]) ;
    }
    cout<<ans;
    cout<<endl;
    
    return 0;
}