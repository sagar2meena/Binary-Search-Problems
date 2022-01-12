// SORTING ALGORITHMS//
#include"bits/stdc++.h"
 using namespace std;
// Quick sort
void swap( int arr[] , int i ,int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
int Partition( int arr[] , int l ,int r){
	int pv = arr[r];
	int i = l-1;
	for( int j = l; j<r; j++){
		if(arr[j]<pv){
			i++;
			swap( arr , i ,j);
		}

	}
	swap( arr ,i+1 ,r);
	return i+1;
}
void QuickSort( int arr[] , int l , int r){
if(r>l){
int pi = Partition( arr,l,r);
QuickSort( arr , l ,pi - 1);
QuickSort( arr , pi+1 , r);
}}

/* void quicksort( int arr[] , int n){
     
     int l = 0;
     int r = n;
     int stack[r-l+1];
     int top = -1;
     stack[++top] = l;
     stack[++top] = r;
     while(top>=0){
      r = stack[top--];
      l = stack[top--];
     
          int pi = partition(arr ,l ,r);
          if(pi-1>l){
              stack[++top] = l;
              stack[++top] = pi-1;             
           }
           if(pi+1<r){
               stack[++top] = pi+1;
               stack[++top] =  r;
           }
     
     }
 } */
int main()
{
int arr[] = {1,5,6,3,2,6};
int n = sizeof(arr)/sizeof(arr[0]);
QuickSort( arr , 0 ,n);
for( int i =0; i<n;i++){
	cout<<arr[i]<<" ";
}
return 0;
}