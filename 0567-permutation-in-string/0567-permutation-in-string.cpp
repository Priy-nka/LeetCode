class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size(); int n2=s2.size();
        map<char, int>org_mp;
        for (char i:s1)
        {
            org_mp[i]++;
        }
        int i=0; int j=i+n1-1; int count=0;
        while (j<n2)
        {
            count++;
            map<char, int>mp;
            while (i<=j)
            {
                if (i!=j)
                {
                mp[s2[i]]++;
                mp[s2[j]]++;
                i++;
                j--;
                }
                else
                {
                    mp[s2[i]]++;
                    i++;
                }
            }
            if (mp==org_mp)
                return true;
            i=count;
            j=i+n1-1;
        }
        return false;
    }
};