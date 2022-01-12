#include"bits/stdc++.h"
using namespace std;
// Print all subarray with 0 sum
vector<pair<int,int>> Print_all( int arr[] , int n)
{
    unordered_map<int , vector<int>> map;
    vector<pair<int,int>> out;
    int sum =0;
    for( int i=0;i<n;i++){
      sum += arr[i];
      if(sum == 0){
        out.push_back(make_pair(0,i));
      }
        if(map.find(sum) != map.end())
        {
          vector<int> vc = map[sum];
          for( auto i: vc){
            cout<<i<<" ";
          }
          for( auto it = vc.begin() ; it != vc.end() ; it++){
            out.push_back(make_pair(*it+1 , i));
          }
        }
        map[sum].push_back(i);
    }
    return out;
}
int main()
{
  int arr[] ={6,3,-1,-3,4,-2,2,4,6,-12,-7};
  int n =sizeof(arr)/sizeof(arr[0]);
  vector<pair<int,int>> ans = Print_all( arr, n);
  if(ans.size() == 0){
    cout<<" no ";
  }else{
    for( auto i : ans){
      cout<<i.first<<" "<<i.second<<endl;
    }
  }
  return 0;
}