class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>ans;
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            if(it.second>1){
                ans.emplace_back(it.first);
            }
        }
        //sort(ans.begin(),ans.end());
        return ans;
    }
};