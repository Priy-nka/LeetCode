// class Solution {
// public:
//     int maxWidthRamp(vector<int>& nums) {
//         int width=0, n=nums.size();
//         stack<int> st;
//         //st.push(nums[0]);
//         for (int i=0; i<n; i++)
//         {
//             while (!st.empty() && nums[i]<nums[st.top()])
//                 st.pop();
//             if (!st.empty())
//             {
//                 if (i-st.top()>width)
//                     width=i-st.top();      
//             }
//             st.push(i);
//         }
//         cout<<st.top()<<endl;
//         for (int j=0; j<n; j++)
//         {
//             if (nums[j]<=nums[st.top()] && width<st.top()-j)
//             {
//                 return st.top()-j;
//             }
//         }
//         return width;
//     }
// };
class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack<int> monoStack;
        int n = nums.size();
        int result = 0;
        for (int i = 0; i < n; ++i) {
            if (monoStack.empty() || nums[monoStack.top()] > nums[i]) {
                monoStack.push(i);
            }
        }
        for (int j = n - 1; j >= 0; --j) {
            while (!monoStack.empty() && nums[j] >= nums[monoStack.top()]) {
                result = max(result, j - monoStack.top());
                monoStack.pop();
            }
        }

        return result;
    }
};
