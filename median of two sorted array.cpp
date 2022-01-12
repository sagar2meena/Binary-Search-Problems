#include"bits/stdc++.h"
using namespace std;
double find_MID( int arr[] , int brr[] , int n ,int m)
{
  
  int l = 0;
  int h = n;
  while(l<=h)
  {
      int cut1 = (l+h)>>1;
      int cut2 = (n+m+1)/2 - cut1;

      int l1 = (cut1 == 0 ? INT_MIN : arr[cut1-1]);
      int l2 = (cut2 == 0 ? INT_MIN : brr[cut2-1]);

      int r1 = (cut1 == n ? INT_MAX : arr[cut1+1]);
      int r2 = (cut2 == m ? INT_MAX : brr[cut2+1]);

      if(l1 <= r2 && l2 <= r1)
      {
          if((n+m)%2 == 0){
            return ((max(l1,l2) + min(r1,r2))/2.0);
          }
          else{
            return (max(l1,l2));
          }
      }
      else if(l1>r2){
          h = cut1 - 1;
      }
      else
      {
           l = cut1 + 1;
      }    
  }
  return 0.0;
}
int main()
{
    int arr[] = {1,3,5,7,9};
    int brr[] = {2,4,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(brr)/sizeof(brr[0]);
    cout<<find_MID( arr ,brr , n ,m);
    return 0;
}
