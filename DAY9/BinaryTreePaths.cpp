class Solution {
private:
    bool treetoleaf(TreeNode* root,vector<string> &ans,string s)
    {
        if(!root)
        {
            return false;
        }
        s=s+to_string(root->val);
        s=s+"->";
        if(root->left==NULL&&root->right==NULL)
        {
            s.erase(s.length()-2);
            ans.push_back(s);
            return true;
        }
        treetoleaf(root->left,ans,s);
        treetoleaf(root->right,ans,s);
        return false;
    }    
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s="";
        treetoleaf(root,ans,s);
        return ans;
    }
};