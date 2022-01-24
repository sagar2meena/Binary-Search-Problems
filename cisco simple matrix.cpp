#include"bits/stdc++.h"
using namespace std;
//  1 2 3
//  4 5 6
//  7 8 9

class Solution{
     vector<int> possible_primes = {3,5,7,11,13,17};
    vector<pair<int,int>> swaple_nodes = {
        {0,1},{0,3},{1,2},{1,4},{2,5},{3,4},{3,6},{4,5},{4,7},
        {5,8},{6,7},{7,8}};
    map<vector<int>,int> possible_grid;
    public :
    Solution()
    {
         
        vector<int> org_grid = {1,2,3,4,5,6,7,8,9};
        possible_grid[org_grid] = 0;
        queue<vector<int>> q;
        q.push(org_grid);

        while(!q.empty())
        {
            vector<int> cur_grid = q.front();
            q.pop();
                
            for( auto node : swaple_nodes)
            {

            if(find(possible_primes.begin(),possible_primes.end(),cur_grid[node.first]+cur_grid[node.second]) != possible_primes.end())
            {
                vector<int> new_grid = cur_grid;
                swap(new_grid[node.first],new_grid[node.second]);

                auto it = possible_grid.find(new_grid);
                if(it == possible_grid.end())
                {
                    possible_grid[new_grid] = possible_grid[cur_grid]+1;
                    q.push(new_grid);
                }

            }
            }
        }
    }
       
    
    int convert(vector<vector<int>> M)
    {  
        vector<int> puzzle_matrix(9);
        for(int i=0;i<3;i++)
        {
            for( int j=0;j<3;j++)
            {
                puzzle_matrix[i*3+j] = M[i][j];
            }
        }
        auto it = possible_grid.find(puzzle_matrix);
        if(it!=possible_grid.end())
        {
            return possible_grid[puzzle_matrix]; 
        }else{
            return -1;
        }
    }

    };
   

int main()
{  
    Solution obj1;
    vector<vector<int>> m = {{2,1,3},{4,5,6},{7,8,9}};
    cout<<obj1.convert(m);
    return 0;
}