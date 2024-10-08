class Solution {
public:
    int minSwaps(string s) {
        stack<char>st;
        for(auto it : s){
            char temp = it;
            if(!st.empty() and temp == ']'){
                if(st.top() == '[') {
                    st.pop();
                    continue;
                }
            }

            st.push(temp);
        }
        int stsize = st.size();

        int temp = (stsize == 2 ) ? stsize : stsize/2;
        int ans = (stsize==0) ? 0 :  (temp+1)/2 ;
        return ans;
    }
};