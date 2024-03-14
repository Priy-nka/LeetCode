class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // int ans=0, len=nums.size();
        // for (int i = 0; i < len-1; i++)
        // {
        //     int sum=nums[i];
        //     if (nums[i]==goal)
        //         ans++;
        //     for (int j=i+1; j<len; j++)
        //     {
        //         sum+=nums[j];
        //         if (sum == goal)
        //         {
        //             ans++;
        //         }
        //     }
        // }
        // if (nums[len-1]==goal)
        //     ans++;
        // return ans;
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
                r=len;
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