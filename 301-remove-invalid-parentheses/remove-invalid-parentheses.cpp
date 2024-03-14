class Solution {
public:
    bool isValid(string curr) {
        int balance = 0;
        for(int i=0; i<curr.length(); i++) {
            if(curr[i] == '(') {
                balance++;
            } else if(curr[i] == ')') {
                if(balance == 0) {
                    return false;
                }
                balance--;
            }
        }
        if(balance > 0) {
            return false;
        }
        return true;
    }
    vector<string> removeInvalidParentheses(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<string> ans;
        queue<string> q;
        q.push(s);
        bool found = false;
        set<string> visited;
        while(!q.empty()) {
            int size = q.size();
            for(int i=0; i<size; i++) {
                string curr = q.front();
                q.pop();
                if(isValid(curr)) {
                    found = true;
                    ans.push_back(curr);
                } else {
                    for(int i=0; i<curr.length(); i++) {
                        if(curr[i] == '(' || curr[i] == ')') {
                            string temp = curr.substr(0,i) + curr.substr(i+1);
                            if(!visited.contains(temp)) {
                                q.push(temp);
                                visited.emplace(temp);
                            }
                        }
                    }
                }
            }
            if(found) {
                break;
            }
        }
        return ans;
    }
};