#include"bits/stdc++.h"
using namespace std;
// maximum sum of non adjacent element  // 
int main()
{
  int arr[] = {5,10,10,100,5,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  int inc = arr[0];
  int exc = 0;
  for(int i=1;i<n;i++)
  {
    int ninc = exc+arr[i];
    int nexc = max(inc,exc);
    inc = ninc;
    exc = nexc;
  }
  cout<<max(inc,exc);
  return 0;
}