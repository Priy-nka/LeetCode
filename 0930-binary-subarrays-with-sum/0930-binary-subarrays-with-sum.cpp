class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=0, len=nums.size();
        for (int i = 0; i < len-1; i++)
        {
            int sum=nums[i];
            if (nums[i]==goal)
                ans++;
            for (int j=i+1; j<len; j++)
            {
                sum+=nums[j];
                if (sum == goal)
                {
                    ans++;
                    //sum = nums[i];
                }
                // else
                // {
                //     sum+=nums[j];
                // }
            }
        }
        if (nums[len-1]==goal)
            ans++;
        return ans;
    }
};