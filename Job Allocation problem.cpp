#include"bits/stdc++.h"
using namespace std;
// BRUTE FORCE APPROACH :-  // O(n^2)

struct job // Struct define of job type 
{
    char id;
    int dead;
    int profit;
};
int comparision( job a ,job b)
{
    if(a.profit<b.profit)
    {
        return false;
    }else
    {
        return true;
    }
}
void job_sch(job arr[],int n)
{   // sort job's on the basis of profit in decreasing order
    sort( arr, arr+n , comparision);  
    
    int result[n];   // declare for storing schedule
    bool slot[n];  // Time alocate for particular slot 

    for(int i=0;i<n;i++)
    {
        slot[i] = false;
    }

    for( int i=0;i<n;i++)
    {           // Current job alocat at later slot
        for( int j=min(n,arr[i].dead)-1; j>=0 ; j--)
        {
            if(slot[j] == false)
            {
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }

    for( int i=0;i<n;i++)
    {
        if(slot[i])
        {
            cout<<arr[result[i]].id<<" ";
        }
    }
}

 // Optimised Aproach

int main()
{   
    job  arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
                   {'d', 1, 25}, {'e', 3, 15}};
    int n = sizeof(arr)/sizeof(arr[0]);
    job_sch( arr, n);
    return 0;
}