class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> ma;
        for(int i=0;i<nums.size();i++)
        {
            ma[nums[i]]++;
        }
        int n=nums.size()/2;
        for(auto i: ma)
        {
            if(ma.find(i.first)!=ma.end())
            {
                if(i.second>n)
                {
                    return i.first;
                }
            }
        }
        return 0;
    }
};