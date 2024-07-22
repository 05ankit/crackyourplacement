#include <bits/stdc++.h>
using namespace std;
vector<char> printDups(string str)
{
    vector<char> ans;
    unordered_map<char, int> count;
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++;
    }
    for (auto it : count) {
        if (it.second > 1)
        {
            ans.push_back(it.first);
        }     
    }
    return ans;
}