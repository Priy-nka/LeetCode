class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>mp;
        int n=nums1.size(), m=nums2.size();
        sort (nums1.begin(), nums1.end());
        vector<int> ans;
        if (nums1==nums2)
            return nums1;
        for (int j=0;j<m;j++)
        {
            mp[nums2[j]]=0;
        }
        for (int i=0;i<m;i++)
        {
            if (n==1)
            {
                if (nums1[0]==nums2[i] && !mp[nums2[i]])
                {
                    ans.push_back(nums2[i]);
                    mp[nums2[i]]++;
                }
            }
            else
            {
            int low=0, high=n-1, mid=0;
            while (low<high)
            {
                mid=(low+high)/2;
                if (nums1[mid]==nums2[i] || nums1[low]==nums2[i] || nums1[high]==nums2[i])
                {
                    if (!mp[nums2[i]])
                    {
                        ans.push_back(nums2[i]);
                        mp[nums2[i]]++;
                    }
                    low=high;
                }
                else if (nums1[mid]<nums2[i])
                    low=mid+1;
                else
                    high=mid-1;
            }
            }
        }
        return ans;
    }
};