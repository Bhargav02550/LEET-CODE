class Solution {
public:
    int coin(vector<int>&arr,int rem,vector<int>&dp){
        if(rem==0){
        return 0;
        }
        if(dp[rem]!=-1)return dp[rem];
        int ans=1e9;
        for(int i=0;i<arr.size();i++){
        //cout<<arr[i]<<" ";
        if(arr[i]<=rem){
                int val=coin(arr,rem-arr[i],dp)+1;
                ans = min(ans,val);
            }
        }
        return dp[rem]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
        if(coin(coins,amount,dp)==1e9)return -1;
        return coin(coins,amount,dp);
    }
};