#include"bits/stdc++.h"
using namespace std;
// minimum platform 
/* Given the arrival and departure times of all trains that reach a railway station, the task is to find the minimum number of platforms required for the railway station so that no train waits. 
We are given two arrays that represent the arrival and departure times of trains that stop.

Examples: 

Input: arr[] = {9:00, 9:40, 9:50, 11:00, 15:00, 18:00} 
dep[] = {9:10, 12:00, 11:20, 11:30, 19:00, 20:00} 
Output: 3 
Explanation: There are at-most three trains at a time (time between 9:40 to 12:00)

Input: arr[] = {9:00, 9:40} 
dep[] = {9:10, 12:00} 
Output: 1 
Explanation: Only one platform is needed. 
*/
int platform_needed(vector<int> &arr , vector<int> &dept)
{
    int n = arr.size();
    int res = 1; // storing requried plotFrom
    int cur_platform = 1; // sotring current required platForm
    int i = 1 , j = 0;
    while(i<n && j<n)
    {
        if(arr[i]<=dept[j])
        {
            cur_platform++;
            i++;
        }else if(arr[i]>dept[j])
        {
            cur_platform--;
            j++;
        }
        if(cur_platform>res)
        {
            res = cur_platform;
        }
    }
    return res;
}
int main()
{
    vector<int> arr = {900 , 940 , 950 , 1100 , 1500 , 1800};
    vector<int> dep = {910 , 1200 , 1130 , 1900 , 2000};
    cout<<"Menimum No of platform required : "<<platform_needed(arr,dep)<<endl;
    return 0;
}
