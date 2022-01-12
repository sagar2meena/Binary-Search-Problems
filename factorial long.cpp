 #include"bits/stdc++.h"
 using namespace std;
 // find the factorial of a number n
 
 vector<int> fact( int n){
    vector<int> res;
	res.push_back(1);
	for( int i = 2 ; i<=n ; i++){
		int car = 0;
		for( int j = 0 ; j<res.size() ; j++){
			int val = res[j]*i + car;
			res[j] = val%10;
            car = val/10;
		}
		while( car != 0){
			res.push_back(car%10);
			car = car/10;
		}
	}
		reverse(res.begin() , res.end());
		return res;
 }
 int main(){
	 
	 int n;
	 cin>>n;
	 vector<int> ans;
	 ans = fact(n);
	 for( auto i : ans){
		 cout<<i;
	 }
	 return 0 ;
 }