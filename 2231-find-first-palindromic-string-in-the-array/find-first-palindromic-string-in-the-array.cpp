class Solution {
public:
    bool check(string s){
        string val="";
        for(int i=s.size()-1;i>=0;i--){
            val+=s[i];
        }
        //cout<<val<<" ";
        if(s==val)return 1;
        return 0;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto it:words){
            if(check(it)){
                return it;
                break;
            }
        }
        return "";
    }
};