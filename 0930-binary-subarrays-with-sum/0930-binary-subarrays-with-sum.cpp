class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int len=nums.size(), ans=0;
        if (len==1)
        {
            if (nums[0]==goal)
                return 1;
            return 0;
        }
        int l=0, r=1;
        long long sum=nums[0];
        while (l<len-1)
        {
            if(nums[l]==goal)
                ans++;
            while (r<len)
            {
                sum+=nums[r];
            if (sum==goal)
            {
                ans++;
                r++;
            }
            else if (sum>goal)
            {
                r=len+1;
            }
            else
            {
                r++;
            } 
            //sum+=nums[r];
            }
            l++;
            r=l+1;
            sum=nums[l];
        }
        if (nums[len-1]==goal)
            ans++;
        return ans;
    }
};