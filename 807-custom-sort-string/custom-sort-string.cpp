class Solution {
public:
    string customSortString(string order, string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        string sa = "";
        string remaining_chars = "";
        unordered_map<char, int> char_freq;
        for (char c : s) {
            char_freq[c]++;
        }
        for (char c : order) {
            if (char_freq.find(c) != char_freq.end()) {
                sa.append(char_freq[c], c);
                char_freq.erase(c);
            }
        }
        for (auto& entry : char_freq) {
            remaining_chars.append(entry.second, entry.first);
        }
        return sa + remaining_chars;
    }
};