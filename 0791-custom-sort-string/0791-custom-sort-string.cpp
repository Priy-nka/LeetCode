class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        int ord=order.size(), len=s.size(), l=0;
        map<char , int> mp;
        map<char, int> smp;
        for (int i=0;i<len; i++)
        {
            mp[s[i]]++;
        }
        for (int j=0; j<ord; j++)
        {
            if (mp[order[j]])
            {
                for (int p=0; p<mp[order[j]]; p++)
                {
                    ans+=order[j];
                    l++;
                }
            }
        }
        for (char j:ans)
            smp[j]++;
        for (int x=0; x<len; x++)
        {
            if (!smp[s[x]])
                ans+=s[x];
        }
        
        return ans;
    }
};