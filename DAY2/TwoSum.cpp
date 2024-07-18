class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //this code will run only for the sorted nums
       sort(nums.begin(),nums.end());
       int left=0;
       int right=nums.size()-1;
       int sum=0;
       while(left<right)
       {
         sum=nums[left]+nums[right];
         if(sum==target)
         {
            return {left,right};
         }
         if(sum<target)
         {
            left++;
         }
         else
         {
            right--;
         }
       }
       return {left,right};
    }
};