class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0, r=1, maxPro=0;
        int len=prices.size();
        while (r<len)
        {
            if (prices[l]<prices[r])
            {
               int pro= prices[r]-prices[l];
                if (pro>maxPro)
                    maxPro=pro;
            }
            else
                l=r;
            r++;
        }
        return maxPro;
    }
};