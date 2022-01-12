#include"bits/stdc++.h"
using namespace std;
void Search( int arr[] , int x , int n , int k){
  int i=0;
  while(i<n){
    if(arr[i] == x){
      cout<<" index :"<<i;
      return;
    }
    i = i +max(1,abs(arr[i] - x)/k);
  }
  cout<<" not find"<<endl;
  return;
}
int main(){
  int arr[] = {20,40,50,70,70,60};
  int k ,  x = 60;
  k = 20;
 int n = sizeof(arr)/sizeof(arr[0]);
  Search( arr , x , n , k);
  return 0;
}