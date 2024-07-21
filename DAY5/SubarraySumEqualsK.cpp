class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> previoussum;
        int currentsum=0;
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
            currentsum+=nums[i];
            if(currentsum==k)
            {
                result++;
            }
            if(previoussum.find(currentsum-k)!=previoussum.end())
            {
                result+=previoussum[currentsum-k];
            }
            previoussum[currentsum]++;
        } 
        return result;
    }
};