class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>&mat)
    {
         ios_base::sync_with_stdio(false);
         cin.tie(NULL);
         cout.tie(NULL);
         vector<int>ans;
         map<int,vector<int>>mp;
         for(int i=0;i<mat.size();i++){
             for(int j=0;j<mat[0].size();j++){
                 mp[i+j].push_back(mat[i][j]);
             }
         }
         for(auto it:mp){
             int val = it.first;
             if(val%2==0){
                 vector<int>ma;
                 ma = it.second;
                 reverse(ma.begin(),ma.end());
                 for(auto its:ma){
                     ans.emplace_back(its);
                 }
             }
             else{
                 vector<int>ma;
                 ma = it.second;
                 for(auto at:ma){
                     ans.emplace_back(at);
                 }
             }
         }
         return ans;
    }
};