class Solution {
public:
    void helper(vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds,int ind,int n,int target){
        if(ind==n){
            if(target==0){
                ans.emplace_back(ds);
            }
            return;
        }
        if(arr[ind]<=target){
            ds.emplace_back(arr[ind]);
            helper(arr,ans,ds,ind,n,target-arr[ind]);
            ds.pop_back();
        }
        helper(arr,ans,ds,ind+1,n,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        helper(candidates,ans,ds,0,candidates.size(),target);
        return ans;   
    }
};