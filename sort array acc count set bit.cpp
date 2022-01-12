#include"bits/stdc++.h"
using namespace std; // sort the array acc count of set bit
int count_bit( int n){
  int count = 0;
  while(n){
   if(n&1)
     count++;
   n >>= 1;
  }
  return count;
}
void sort_bit( int arr[] ,int n){
  multimap<int,int> count;
  for( int i=0;i<n;i++){
    count.insert({(-1)*count_bit(arr[i]) , arr[i]});
  }
  for( auto i: count)
    cout<<i.second<<" ";
    cout<<"\n";
}

int main()
{
  int arr[] = {1,2,3,4,5,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<count_bit(7)<<endl;
  sort_bit( arr, n);
  return 0;
}