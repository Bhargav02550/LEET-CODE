class Solution {
public:
    void Fun(int ind,int n,vector<int>&num,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(ind==n){
            ans.emplace_back(ds);
            return;
        }
        ds.emplace_back(num[ind]);
        Fun(ind+1,n,num,ds,ans);
        ds.pop_back();
        Fun(ind+1,n,num,ds,ans); 
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        Fun(0,n,nums,ds,ans);
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};