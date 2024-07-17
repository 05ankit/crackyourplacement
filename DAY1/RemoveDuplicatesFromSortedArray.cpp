class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> nums1;
        int count=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                nums1.push_back(nums[i]);
                count+=1;
            }
        }
        nums1.push_back(nums[nums.size()-1]);
        for(int i=0;i<nums1.size();i++)
        {
            nums[i]=nums1[i];
        }
        return count+1;
    }
};