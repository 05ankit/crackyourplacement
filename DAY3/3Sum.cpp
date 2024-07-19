class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
       // set<vector<int>> level;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
            continue;
            int l=i+1;
            int r=nums.size()-1;
            while(l<r)
            {
                
                int sum=nums[l]+nums[r]+nums[i];
                if(sum<0)
                {
                    l++;
                }
                else if(sum>0)
                {
                    r--;
                }
                else
                {
                    //level.insert({nums[i],nums[l],nums[r]});
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                      while(l<r&&nums[l]==nums[l-1])
                     {
                      cout<<nums[l];
                      l++;
                    }
                }
              
            }
        }
        
       /* for(auto i: level)
        {
            ans.push_back(i);
        }*/
        return ans;
    }
};