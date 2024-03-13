class Solution {
public:
    int pivotInteger(int n) {
        int sum = n*(n+1)/2;
        int curr=0;
        for (int j=1; j<=n; j++)
        {
            curr+=j;
            if (curr==sum-curr+j)
                return j;
        }
        return -1;
    }
};