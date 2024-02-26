class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (nums.size()==1)
        return nums;
        vector<int> count(20001,0);
        vector<int>ans;
        int len=nums.size();
        for (int i=0;i<len;i++)
        {
            count[nums[i]+10000]++;
        }
        //int n = sizeof(count) / sizeof(count[0]);
        
        unordered_map<int,int>mp;
        for (int j=0;j<20001;j++)
        {
            if(count[j]!=0)
            {
                mp[j-10000]=count[j];
            }
        }
        sort(count.begin(), count.end(), greater<int>());
        for(int p=0;p<k;p++)
        {
            for(auto x:mp)
            {
                if(x.second==count[p])
                {
                    ans.push_back(x.first);
                    mp[x.first]++;
                    break;
                }
            }
        }
        return ans;
    }
};