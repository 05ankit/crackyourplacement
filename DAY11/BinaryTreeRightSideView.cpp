class Solution {
public:
    vector<int> rightview(TreeNode* root,int level,vector<int> &ans)
    {
        if(root==NULL)
        {
            return ans;
        }
        if(level==ans.size())
        {
            ans.push_back(root->val);
        }
        rightview(root->right,level+1,ans);
        rightview(root->left,level+1,ans);
        return ans;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        rightview(root,0,ans);
        return ans;
    }
};