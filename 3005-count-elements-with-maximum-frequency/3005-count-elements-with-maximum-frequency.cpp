class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;
        int max=0;
        for (int i: nums)
        {
            mp[i]++;
            if(mp[i]>max)
                max=mp[i];
        }
        int ans=0;
        for (auto x: mp)
        {
            if (x.second==max)
                ans+=max;
        }
        return ans;
    }
};