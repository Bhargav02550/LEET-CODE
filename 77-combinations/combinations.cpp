class Solution {
public:
    void helper(vector<vector<int>>& ans, vector<int>& ds, int current, int n, int size) {
        if (current > n) {
            if (ds.size() == size) {
                ans.emplace_back(ds);
            }
            return;
        }
        ds.emplace_back(current);
        helper(ans, ds, current + 1, n, size);
        ds.pop_back();
        helper(ans, ds, current + 1, n, size);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> ds;
        helper(ans, ds, 1, n, k);
        return ans;
    }
};