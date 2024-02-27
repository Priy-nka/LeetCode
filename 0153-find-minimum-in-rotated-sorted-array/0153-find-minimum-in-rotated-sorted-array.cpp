class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1,mid=0,min=5000;
        if(n==1)
            return nums[0];
        if(n==2)
        {
            if(nums[0]<nums[1])
                return nums[0];
            return nums[1];
        }
        while(high>low)
        {
            mid=(low+high)/2;
            if(nums[mid]<nums[high] && nums[mid]<nums[low])
            {
                if(nums[mid]<min)
                    min=nums[mid];
                //return min;
                low++;
            }
            else if(nums[high]<nums[low])
            {
                if(nums[high]<min)
                    min=nums[high];
                low=mid+1;
            }
            else
            {
                if(nums[low]<min)
                    min=nums[low];
                high=mid-1;
            }
        }
        return min;
        
    }
};