class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        map<int, int>mp;
        vector<int> temp;
        int len=nums.size();
        for (int i=0; i<len; i++)
        {
            mp[nums[i]]++;
            if (nums[i]!=0)
                temp.push_back(nums[i]);
        }
        if (mp[0])
        {
            for (int i=1; i<=mp[0]; i++)
                temp.push_back(0);
        }
        nums=temp;
    }
};