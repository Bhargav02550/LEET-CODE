class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> ans;
        unordered_set<int> numSet(nums2.begin(), nums2.end());

        for (int i : nums1) {
            if (numSet.find(i) != numSet.end()) {
                ans.push_back(i);
                numSet.erase(i);
            }
        }

        return ans;
    }
};