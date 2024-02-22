class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trusts(n + 1, 0);
        vector<int> trusted(n + 1, 0);
        for (const auto relation : trust) {
            int a = relation[0];
            int b = relation[1];
            trusts[b]++;
            trusted[a]++;
        }
        for (int i = 1; i <= n; i++) {
            if (trusts[i] == n - 1 && trusted[i] == 0) {
                return i;
            }
        }
        return -1; 
    }
};