class Solution {
public:
    int pivotInteger(int n) {
        int sum = 0;
        for (int i=1; i<=n; i++)
        {
            sum+=i;
        }
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