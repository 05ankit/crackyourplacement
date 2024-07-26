#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
      int n1=a.length()-1;
       int n2=b.length()-1;
       string ans;
       int carry=0;
       int i=0;
       while(n1>=0&&n2>=0)
       {
          int t1=a[n1]-'0';
          int t2=b[n2]-'0';
          ans+=('0'+(t1+t2+carry)%2);
          carry=(t1+t2+carry)/2;
          n1--;n2--;
       }
       while(n1>=0)
       {
        int t=a[n1]-'0';
        ans+=('0'+(t+carry)%2);
        carry=(t+carry)/2;
        n1--;
       }
       while(n2>=0)
       {
        int t=b[n2]-'0';
        ans+=('0'+(t+carry)%2);
        carry=(t+carry)/2;
        n2--;
       }
       if(carry>0)
       {
        ans+='1';
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};