#include"bits/stdc++.h"
using namespace std;
// IN PLACE MERGE SORT :
void merge( int arr[] ,  int start , int mid , int end)
{
  int i =start;
  int j = mid+1;
  while( i<=mid && j<=end )
  {
     if(arr[i]<=arr[j])
     {
       i++;
     }
     else
     {
       int val = arr[j];
       int index = j;
       while( index!= i)
       {
          arr[index] = arr[index-1];
          index--;
       }
       arr[i] = val;
       i++;
       j++;
       mid++;
     }
  }
}
int main()
{
  int arr[] = {1,2,3,4,12,5,6,7,9};
  merge( arr , 0 , 4 , 8);
  for( int i : arr)
  {
    cout<<i<<" ";
  }
  return 0;
}