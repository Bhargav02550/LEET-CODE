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
    bool isSameTree(TreeNode* r1, TreeNode* r2) {
        if(r1==NULL and r2==NULL)return true;
        else if(r1==NULL || r2==NULL)return false;
        else{
            if(r1->val==r2->val and isSameTree(r1->left,r2->left) and isSameTree(r1->right,r2->right)){
                return true;
            }
            else{
                return false;
            }
        }
    }
};