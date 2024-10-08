class Solution {
public:
    int minLength(string s) {
        string ab="AB"; string cd="CD";
        stack<char> st;
        st.push(s[0]);
        for (int i=1; i<s.size(); i++)
        {
            if (!st.empty())
            {
                string curr = st.top()+string(1, s[i]);
                if ((curr==ab) || (curr==cd))
                    st.pop();
                else
                    st.push(s[i]);
            }
            else
                st.push(s[i]);
        }
        return st.size();
    }
};