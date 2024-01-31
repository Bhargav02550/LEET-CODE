class Solution {
public:
        int helper(int i,int j, int m, int n,vector<int>&ans,vector<vector<int>>&dp){
        
        if(i==m-1 and j==n-1){
            return 1;
        }
        if(i>m-1 or j>n-1) return 0; 
        if(dp[i][j]!=-1)return dp[i][j];
        int x=helper(i+1,j,m,n,ans,dp);
        int y=helper(i,j+1,m,n,ans,dp);
        dp[i][j]=x+y;
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        vector<int>ans;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int ds=0;
        int x=0,y=0;
        return helper(0,0,m,n,ans,dp);
    }
};