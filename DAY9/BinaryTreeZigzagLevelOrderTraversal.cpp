class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        int flag=0;
        while(!q.empty())
        {
            int s=q.size();
            vector<int> level;
            for(int i=0;i<s;i++)
            {
                TreeNode* Node=q.front();
                q.pop();
                if(Node->left!=NULL)
                {
                    q.push(Node->left);
                }
                if(Node->right!=NULL)
                {
                    q.push(Node->right);
                }
                level.push_back(Node->val);
            }
            if(flag==1)
            {
                reverse(level.begin(),level.end());
                flag=0;
            }
            else
            {
                flag=1;
            }
            ans.push_back(level);
        }
        return ans;
    }
};