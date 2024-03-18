class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort (points.begin(), points.end());
        // for (int i=0; i<points.size(); i++)
        // {
        //     for (int j=0; j<2; j++)
        //     {
        //         cout<<points[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int ans=1, x=points[points.size()-1][0];
        for (int i = points.size()-1; i>=0; i--)
        {
            if (x<points[i][0] || x>points[i][1])
            {
                ans++;
                x=points[i][0];
            }
            // else
            //     x=points[i][0];
        }
        return ans;
    }
};