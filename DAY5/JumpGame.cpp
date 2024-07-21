class Solution {
private:
    bool jump(vector<int> &nums,int start,int end,vector<int> &memo)
    {
        if(start==end)
        {
            return true;
        }
        if(nums[start]==0)
        {
            return false;
        }
        if(memo[start]!=-1)
        {
            return memo[start];
        }
        for(int i=start+1;i<=start+nums[start];i++)
        {
            if(i<nums.size()&&jump(nums,i,end,memo))
            {
                return memo[start]=true;
            }
        }
        return memo[start]=false;
    }    
public:
    bool canJump(vector<int>& nums) {
        vector<int> memo(nums.size(),-1);
        return jump(nums,0,nums.size()-1,memo);
    }
};