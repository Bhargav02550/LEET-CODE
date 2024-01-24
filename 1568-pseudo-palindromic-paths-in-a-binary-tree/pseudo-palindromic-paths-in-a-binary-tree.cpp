/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode *root,map<int,int>&mp,int &ans){
        if(root==NULL)return;
        mp[root->val]++;
        //int c=0;
        if(root->left==NULL and root->right==NULL){
            int c=0;
            for(auto it:mp){
                if(it.second%2){
                    c+=1;
                }
            }
            if(c<=1){
                ans+=1;
            }
        }
        dfs(root->left,mp,ans);
        dfs(root->right,mp,ans);
        mp[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        map<int,int>mp;
        int ans=0;
        dfs(root,mp,ans);
        return ans;
    }
};