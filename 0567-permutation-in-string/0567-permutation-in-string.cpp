class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size(); int n2=s2.size();
        map<char, int>org_mp;
        for (char i:s1)
        {
            org_mp[i]++;
        }
        // if (n1==1)
        // {
        //     if (org_mp[s2[0]])
        //         return true;
        //     return false;
        // }
        // for (auto m:org_mp)
        // {
        //     cout<<m.first<<" "<<m.second<<endl;
        // }
        int i=0; int j=i+n1-1; int count=0;
        while (j<n2)
        {
            count++;
            map<char, int>mp;
            while (i<=j)
            {
                if (i==j)
                {
                    mp[s2[i]]++;
                    i++;
                    j--;
                }
                else
                {
                mp[s2[i]]++;
                mp[s2[j]]++;
                i++;
                j--;
                }
            }
            // cout<<"mp: "<<endl;
            // for (auto x:mp)
            // {
            //     cout<<x.first<<" "<<x.second<<endl;
            // }
            if (mp==org_mp)
                return true;
            i=count;
            j=i+n1-1;
        }
        return false;
    }
};