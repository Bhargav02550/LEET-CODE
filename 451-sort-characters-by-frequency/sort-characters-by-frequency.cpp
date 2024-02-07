class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        vector<pair<int,char>>val;
        for(auto it:mp){
            val.push_back({it.second,it.first});
        }
        sort(val.rbegin(),val.rend());
        string ans="";
        for(auto it:val){
            for(int i=0;i<it.first;i++){
                ans+=it.second;
            }
        }
        return ans
        ;
    }
};