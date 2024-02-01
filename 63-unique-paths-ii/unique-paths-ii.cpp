class Solution {
public:
    int helper(vector<vector<int>>&dp,vector<vector<int>>&grid,int i,int j,int m,int n){
        if(i==m-1 and j==n-1){
            if(grid[i][j]==1){
                return 0;
            }
            return 1;
        }
        if(i>=m or j>=n)return 0;
        if(grid[i][j]==1)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int x=helper(dp,grid,i+1,j,m,n);
        int y=helper(dp,grid,i,j+1,m,n);
        return dp[i][j]=x+y;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return helper(dp,obstacleGrid,0,0,m,n);
    }
};