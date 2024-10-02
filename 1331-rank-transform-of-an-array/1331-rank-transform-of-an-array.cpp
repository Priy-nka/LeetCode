class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp=arr;
        int n=arr.size();
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
        
        return rank;
    }
};