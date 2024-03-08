class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
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