class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> ma;
        for(int i=0;i<nums.size();i++)
        {
            ma[nums[i]]++;
        }
        for(auto i: ma)
        {
            cout<<i.second;
        }
        for(auto i:ma)
        {
            if(i.second>=2)
            {
                return i.first;
            }
        }
        return 0;
    }
};