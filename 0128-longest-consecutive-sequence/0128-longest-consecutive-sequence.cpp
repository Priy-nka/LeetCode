class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        int len=1,n=nums.size(),max=1;
        for(int i=0;i<n-1;i++)
        {
            if (nums[i+1]-nums[i]==1)
            {
                len++;
                if(len>max)
                    max=len;
            }
            else if (nums[i+1]-nums[i]==0)
            {
                continue;
            }
            else
            {
                if(len>max)
                    max=len;
                len=1;
            }
            //cout<<max<<endl;
        }
        return max;
    }
};