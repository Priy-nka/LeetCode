class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort (points.begin(), points.end());
        int ans=1, x=points[points.size()-1][0];
        for (int i = points.size()-1; i>=0; i--)
        {
            if (x<points[i][0] || x>points[i][1])
            {
                ans++;
                x=points[i][0];
            }
        }
        return ans;
    }
};