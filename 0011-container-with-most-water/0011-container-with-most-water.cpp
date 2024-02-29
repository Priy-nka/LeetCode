class Solution {
public:
    int maxArea(vector<int>& height) {
        //sort(height.begin(),height.end());
        int max=0;
        int low=0, high=height.size()-1;
        while (low<high)
        {
            if(height[high]<height[low])
            {
                int area=(high-low)*(height[high]);
                if(area>max)
            {
                max=area;
                high--;
            }
            else
            {
                high--;
            }
            }
            else
            {
                int area=(high-low)*(height[low]);
                if(area>max)
            {
                max=area;
                low++;
            }
            else
            {
                low++;
            }
            }
            
        }
        return max;
    }
};