class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int>mp;
        for (int i:nums)
        {
            if (i>=0)
            mp[i]++;
        }
        int sum=1;
        for (auto x:mp)
        {
            if (mp[sum])
                sum++;
            else
                return sum;
        }
        return sum;
    }
};