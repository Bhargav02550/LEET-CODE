class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
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