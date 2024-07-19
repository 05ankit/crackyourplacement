class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        set<vector<int>> st;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size()-1;j++)
            {
                int l=j+1;
                int r=nums.size()-1;
                while(l<r)
                {
                    long long sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[l]+(long long)nums[r];
                    if(sum<target)
                    {
                        l++;
                    }
                    else if(sum>target)
                    {
                        r--;
                    }
                    else
                    {
                        st.insert({nums[i],nums[j],nums[l],nums[r]});
                        l++;
                        r--;
                    }
                }
            }
        }
        for(auto x:st)
        {
            ans.push_back(x);
        }
        return ans;
    }
};