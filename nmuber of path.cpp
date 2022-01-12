#include"bits/stdc++.h"
 #include<string>
 using namespace std;
 
// count the| number of path possible from start point to end point in gameboard
// |  1 |  2 | 3 | 4 | 5 |
int count( int s , int e){
	if(s=e){
		return 1;
	}
	if(s>e){
		return 0;
	}
	int countans;
	for( int i = 1 ; i<= e ; i++){
     countans += count( s+i , e) ;
	}
	return countans;
}
 int main(){
 cout<<count( 0 , 5);
return 0;
 }