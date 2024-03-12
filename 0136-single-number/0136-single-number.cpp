class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int>mp;
        int len=nums.size();
        for (int i=0; i<len; i++)
            mp[nums[i]]++;
        for (auto x: mp)
        {
            if(x.second==1)
                return x.first;
        }
        return 0;
    }
};