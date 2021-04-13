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
    
    void dfs(TreeNode *x, int &pre, int &ans) {
        if(x==nullptr) return;
        //cout<<x->val<<" "<<pre<<" "<<ans<<endl;
        dfs(x->left, pre, ans);
        //cout<<"updatep"<<x->val<<" "<<pre<<" "<<ans<<endl;
        if(pre==-1) pre=x->val;
        else {
            ans=min(ans, x->val-pre);
            pre=x->val;
        }
        //cout<<"updated"<<x->val<<" "<<pre<<" "<<ans<<endl;
        dfs(x->right, pre, ans);
    }

    int minDiffInBST(TreeNode* root) {
        int ans=INT_MAX, pre=-1;
        dfs(root, pre, ans);
        return ans;
    }
};
