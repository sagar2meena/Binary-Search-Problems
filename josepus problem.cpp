 #include"bits/stdc++.h"
 using namespace std;
 // JOSEPUS PROBLEM
 int josepus( int n , int k){
     if( n==1){
         return 0;
     }
     return (josepus(n-1 , k)+k)%n;
 }
 int main()
 {
 cout<<josepus( 10 , 3);
 return 0;
 }