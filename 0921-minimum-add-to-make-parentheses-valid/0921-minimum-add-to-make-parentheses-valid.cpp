class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        string val="()";
        stack <char> st;
        st.push(s[0]);
        for (int i=1; i<n; i++)
        {
            if (!st.empty())
            {
            if ((st.top() + string (1, s[i]))==val)
                st.pop();
            else
                st.push(s[i]);
            }
            else
            {
                st.push(s[i]);
            }
        }
        return st.size();
    }
};