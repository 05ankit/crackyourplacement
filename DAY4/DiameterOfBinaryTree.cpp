class Solution {
public:
    int findmaxpath(TreeNode* root,int &maxi)
    {
        if(root==NULL)
        {
            return 0;
        }
        int lh=findmaxpath(root->left,maxi);
        int rh=findmaxpath(root->right,maxi);
        
        maxi=max(maxi,lh+rh);
        return 1+max(lh,rh); 
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        findmaxpath(root,maxi);
        return maxi;
    }
};