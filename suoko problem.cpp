// A Backtracking program in
// C++ to solve Sudoku problem
#include <bits/stdc++.h>
using namespace std;
 void possible( string s , n , vector<string> arr){ 
    if(n==0){
        return ;
    }

    string ch = s.substr(n-1);
     possible( s , n-1 , vector<string> arr);
     if( find(ch , arr)){
         cout<<ch<<" ";
     }
 }
bool find( string ch , vector<string> arr){
    for( int i = 0 ; i<arr.size() ; i++){
        if(ch == arr[i]){
            return true;
        }
    
}return false;
}

int main(){
    vector<string> arr = { "i" , "like" , "sam" , "sung" , "samsung" ,"mobile",
    "ice" , "and" , "cream" , "icecream" , "man" ,"go" ,"mango"}
   
    string s = "ilikesamsungmobile";
    int n= string.size();
    possible( s  , arr);
    return 0;
}