class Solution {
public:
    void helper(vector<int>&ds,vector<vector<int>>&ans,int cur,int n,int target,int k){
        if(cur > n){
            if(accumulate(ds.begin(),ds.end(),0)==target and ds.size()==k){
                ans.emplace_back(ds);
            }
            return;
        }
        ds.emplace_back(cur);
        helper(ds,ans,cur+1,n,target,k);
        ds.pop_back();
        helper(ds,ans,cur+1,n,target,k);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        helper(ds,ans,1,9,n,k);
        return ans;
    }
};