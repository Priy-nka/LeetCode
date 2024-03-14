class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<vector<int>, vector<string>>mp;
        for (string s:strs)
        {
            vector<int> count(26,0);
            for (char c:s)
            {
                count[int(c) - int('a')]++;
            }
            mp[count].push_back(s);
        }
        for (auto x:mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};