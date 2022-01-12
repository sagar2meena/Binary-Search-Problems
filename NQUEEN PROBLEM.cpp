#include"bits/stdc++.h"
 using namespace std;
 // N Queen problem
 bool issafe(vector<vector<int>> arr , int x , int y , int n){
	 for( int raw = 0 ; raw<x ; raw++){
		 if(arr[raw][y] == 1){
           return false;
		 }
	 }
	  int raw = x ;
	  int col = y;
	  while( raw >= 0 && col >= 0){
		  if(arr[raw][col] == 1){
			  return false;
		  }
		  raw--;
		  col--;
	  }
	  raw = x;
	  col = y;
	  while( raw>= 0 && col >= 0){
		  if(arr[raw][col] == 1){
			  return false;
		  }
		  raw--;
		  col++;
	  }
	  return true;
 }
bool NQueen( vector<vector<int>> &arr , int x , int n ){
	if(x>=n){
		return true;
	}
	for( int col = 0 ; col<n ; col++){
		if(issafe(arr, x , col , n)){
        arr[x][col] = 1;
		if(NQueen(arr, x+1 , n)){
			return true;
		}
		arr[x][col] = 0;
		}
	}
	return false;
}
int main(){
int n;
cin>>n;
vector<vector<int>> arr(n , vector<int> (n));
for( int i = 0 ; i<n ; i++ ){
	for(int j = 0 ; j<n ; j++){
		arr[i][j] = 0;
	}
}
if (NQueen( arr , 0  , n)){
	for( int i = 0 ; i<n ; i++ ){
	  for(int j = 0 ; j<n ; j++){
		cout<<arr[i][j]<<" ";
      }
	cout<<endl;
    } 
}
return 0;
}