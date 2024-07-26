#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        string ans="";
        vector<pair<int,string>> vec = {
    {1000, "M"},{900, "CM"},{500, "D"},{400, "CD"},{100, "C"},{90, "XC"},{50, "L"},{40, "XL"},{10, "X"},
    {9, "IX"},{5, "V"},{4, "IV"},{1, "I"}};
    for(auto i: vec)
    {
        while(num>=i.first)
        {
            num-=i.first;
            ans+=i.second;
        }
    }
    return ans;
    }
};