#include"bits/stdc++.h"
using namespace std;
        bool comparator( vector<int> it1 , vector<int> it2 )
        {
           if( it1[1]<it2[1] || it1[1] == it2[1] && it1[2]<it2[2])
           {
               return true;
           }
              return false;
        }
         bool carPooling(vector<vector<int>>  trips, int capacity) {
         sort(trips.begin() , trips.end() , comparator);
         int cur_capacity = 0;
         // pq -> destination , pq-> second -> capacity
         priority_queue<pair<int,int>,vector<pair<int,int>> , greater<pair<int,int>>> pq;
         for( int i=0;i<trips.size();i++)
         {
            while(!pq.empty() && pq.top().first <= trips[i][1])
            {
                cur_capacity -= pq.top().second;
                pq.pop();
            }
            cur_capacity += trips[i][0];
            pq.push({trips[i][2] ,trips[i][0]});
            if( cur_capacity > capacity)
            {
                return false;
            }
         }
                return true;
       }
int main()
{ 
   vector<vector<int>> trips = {{2,1,5},{3,3,7}};
   int capacity = 5;
   cout<<carPooling(trips , capacity);
   return 0;
} 
//