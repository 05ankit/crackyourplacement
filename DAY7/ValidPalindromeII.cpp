class Solution {
public:
    bool check(string s,int i,int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
      int low=0;
      int high=s.length()-1;
      while(low<=high)
      {
        if(s[low]!=s[high])
        {
            return check(s,low+1,high)||check(s,low,high-1);
        }
        else
        {
            low++;
            high--;
        }
      }
      return true;
    }
};