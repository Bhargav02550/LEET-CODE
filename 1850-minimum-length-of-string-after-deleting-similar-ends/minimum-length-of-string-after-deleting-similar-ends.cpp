class Solution {
public:
    int minimumLength(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int i = 0, j = s.size() - 1;
        
        while (i <j && s[i] == s[j]) {
            char curr = s[i];
            while (i <= j && s[i] == curr)
                i++;
            while (i <= j && s[j] == curr)
                j--;
        }
        return j - i + 1;
    }
};