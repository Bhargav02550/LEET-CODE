class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int e=0,o=1;
        vector<int>ans(nums.size());
        for(auto it:nums){
            if(it>0){
                ans[e]=(it);
                e+=2;
            }
            else if(it<0){
                ans[o]=(it);
                o+=2;
            }
        }
        return ans;
    }
};