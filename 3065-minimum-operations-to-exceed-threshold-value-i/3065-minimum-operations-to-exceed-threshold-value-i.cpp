class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int op=0;
        for (int i:nums)
        {
            if (i<k)
                op++;
        }
        return op;
    }
};