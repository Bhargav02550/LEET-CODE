class Solution {
public:
    int tri(int n,vector<int>&dp){
        if(n<2)return n;
        if(n==2)return 1;
        if(dp[n]!=-1)return dp[n];
        return dp[n]=tri(n-1,dp)+tri(n-2,dp)+tri(n-3,dp);
    }
    int tribonacci(int n) {
        vector<int>dp(n+1,-1);
        int ans=tri(n,dp);
        return ans;
    }
};