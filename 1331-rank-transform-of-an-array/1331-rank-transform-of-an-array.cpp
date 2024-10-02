class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> org_mp;
        vector<int> temp=arr;
        int n=arr.size();
        for (int i=0; i<n; i++)
        {
            org_mp[i]=arr[i];
        }
        sort(arr.begin(), arr.end());
        vector<int> rank;
        map<int, int>rank_mp;
        int r=1;
        for (int i=0; i<n; i++)
        {
            if (!rank_mp[arr[i]])
            {
                rank_mp[arr[i]]=r;
                r++;
            }
        }
        for (int i=0;i<n;i++)
        {
            int curr=rank_mp[temp[i]];
            rank.push_back(curr);
        }
        // for (auto m:rank_mp)
        // {
        //     cout<<m.first<<" "<<m.second<<endl;
        // }
        
        return rank;
    }
};