class Solution {
public:
    int checkheight(TreeNode* root)
    {
        if(root==NULL)
        {
            return true;
        }
        int lh=checkheight(root->left);
        int rh=checkheight(root->right);
        if(lh==-1||rh==-1)
        {
            return -1;
        }
        if(abs(lh-rh)>1)
        {
            return -1;
        }
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        return checkheight(root)!=-1;
    }
};