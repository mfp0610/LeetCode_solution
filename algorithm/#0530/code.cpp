/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
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
    int getMinimumDifference(TreeNode* root) {
        int ans=INT_MAX, pre=-1;
        dfs(root, pre, ans);
        return ans;
    }
};
