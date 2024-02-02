class Solution {
public:
    int helper(vector<vector<int>>&grid,int i,int  j,int m,int n,vector<vector<int>>&dp){
        if(i==m-1 and j==n-1){
            return grid[i][j];
        }
        if(i>=m or j>=n)return 1e9;
        if(dp[i][j]!=-1)return dp[i][j];
        int x = grid[i][j]+helper(grid,i+1,j,m,n,dp);
        //cout<<x<<" ";
        int y = grid[i][j]+helper(grid,i,j+1,m,n,dp);
        return dp[i][j]=min(x,y);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return helper(grid,0,0,m,n,dp);
    }
};