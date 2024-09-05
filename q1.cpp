//Maximum Passenger-> Cherry Pickup leetcode
#include <bits/stdc++.h>
using namespace std;
    int dp[51][51][51];
    int solve(vector<vector<int>>& grid,int r1,int c1,int c2){
        int r2 = r1+c1-c2;
        int n = grid.size();
        //base case
        
        if(r2>=n|| r1>=n || c1>=n|| c2>=n || grid[r1][c1] ==-1|| grid[r2][c2] ==-1){
            return INT_MIN;
        }
        if(r1 ==n-1&&c1==n-1){
            return grid[r1][c1];
        }
        if(dp[r1][c1][c2]!=-1){
            return dp[r1][c1][c2];
        }

        int ans = grid[r1][c1];
        if(c1!=c2){
            ans+=grid[r2][c2];//not same cell
        }
        int next = max(
            max(solve(grid, r1, c1 + 1, c2 + 1), solve(grid, r1 + 1, c1, c2)),
            max(solve(grid, r1 + 1, c1, c2 + 1), solve(grid, r1, c1 + 1, c2))
        );

        if (next == INT_MIN) {
            return dp[r1][c1][c2]=INT_MIN;  // If all paths lead to an invalid state, return INT_MIN
        }

        ans += next;
        return dp[r1][c1][c2]=ans;
    }
int cherryPickup(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        int res = solve(grid,0,0,0);
        if(res == INT_MIN){
            return 0;
        }
        return res;
    }
int main()
{   
    int n,m;
    cin >> n >> m;
    vector<vector<int>>mat(n,vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];
    
    cout <<cherryPickup(mat)<< endl;
    
 
    return 0;
}