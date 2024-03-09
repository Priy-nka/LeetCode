class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size()-1,i=0;
        int m=nums2.size()-1,j=0;
        while(i<=n && j<=m)
        {
            if (nums1[i]==nums2[j])
                return nums1[i];
            else if (nums1[i]<nums2[j])
                i++;
            else
                j++;
        }
        return -1;
    }
};