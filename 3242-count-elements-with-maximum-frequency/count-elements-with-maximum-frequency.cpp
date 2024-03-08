class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        int maxi = INT_MIN,ans=0;
        for(auto it:mp){
            if(it.second>maxi){
                maxi = it.second;
            }
        }
        for(auto it:mp){
            if(it.second==maxi){
                ans+=maxi;
            }
        }
        return ans;
    }
};