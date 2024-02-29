class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        if(nums.size()==3)
        {
            if(nums[0]+nums[1]+nums[2]==0)
            {
                ans.push_back({nums[0],nums[1],nums[2]});
                return ans;
            }
        }
        sort(nums.begin(),nums.end());
        map<vector<int>, int> mp;
        for (int i=1;i<nums.size()-1;i++)
        {
            int left=0, right=nums.size()-1;
            
            while(left<i && right>i)
            {
                int sum=nums[left]+nums[right]+nums[i];
                if(sum==0 && (i!=right) && (i!=left))
                {
                    vector<int> temp = {nums[left],nums[i],nums[right]};
                    if(!mp[temp])
                    {
                        mp[temp]++;
                        ans.push_back(temp);
                        left++;
                        right--;
                    }
                    else
                    {
                        left++;
                        right--;
                    }
                
                }
                else if (sum<0)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
        return ans;
    }
};