class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int pro=1;
        int count=0;
        int pos=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count++;
                pos=i;
                continue;
            }
            pro*=nums[i];
        }
        if(count==0)
        {
        for(int j=0;j<nums.size();j++)
            ans.push_back(pro/nums[j]);
        }
        else if(count==1)
        {
            vector<int>ans1(nums.size(),0);
            ans1[pos]=pro; 
            return ans1;
        }
        else
        {
            vector<int>ans2(nums.size(),0);
            return ans2;
        }
        return ans;
    }
};