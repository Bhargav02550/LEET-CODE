class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(arr.begin(),arr.end());
        int ans=1;
        for(auto it:arr){
            if(it==ans){
                ans++;
            }
        }
        return ans;
    }
};