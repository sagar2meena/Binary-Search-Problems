/ SORTING ALGORITHMS//
#include"bits/stdc++.h"
 using namespace std;
 // MERGE SORT//
 // Two way MERGE SORT
int min( int a ,int b){
	if(a<b){
     return a;
	}
	return b;
}
void merge( int arr[] , int l , int mid , int r){
	
	int n1 = mid-l+1;
	int n2 = r- mid;
	int arr1[n1];
	int arr2[n2];
	for( int i = 0 ; i<n1 ;i++){
		arr1[i] = arr[l+i];
	}
	for( int i =0;i<n2;i++){
		arr2[i] = arr[i+mid+1];
	}
	int i =0;
	int j =0;
	int k =l;
    while(i<n1 && j<n2){
		if(arr1[i]<arr2[j]){
			arr[k] = arr1[i];
			i++;
			k++;
		}else{
			arr[k] = arr2[j];
			j++;
			k++;
		}
	}
	while(i<n1){
		arr[k] = arr1[i];
		k++;
		i++;
	}
	while(j<n2){
		arr[k] = arr2[j];
		j++;
		k++;
	}
}
void MergeSort( int arr[] , int n){
	int cur_size ;
	int left_start;
	for( cur_size =1 ; cur_size<=n-1 ; cur_size = 2*cur_size){

		for( left_start = 0 ; left_start<n-1 ; left_start +=2*cur_size)
		{
			int mid  = min(left_start+cur_size-1,n-1);
			int right_end = min(left_start+2*cur_size-1 , n-1);
		   merge( arr ,left_start , mid , right_end);
		}
	}
}
int main()
{
int arr[] = {1,5,6,3,2,6};
int n = sizeof(arr)/sizeof(arr[0]);
MergeSort( arr , n);
for( int i =0; i<n;i++){
	cout<<arr[i]<<" ";
}
return 0;
}