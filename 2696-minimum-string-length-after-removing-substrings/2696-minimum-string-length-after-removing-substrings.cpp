class Solution {
public:
    int minLength(string s) {
        string ab="AB"; string cd="CD";
        stack<char> st;
        st.push(s[0]);
        //cout<<(char)st.top()<<endl;
        for (int i=1; i<s.size(); i++)
        {
            if (!st.empty())
            {
            string curr = st.top()+string(1, s[i]);
            //cout<<curr<<" ";
            if ((curr==ab) || (curr==cd))
                st.pop();
            else
                st.push(s[i]);
            }
            else
                st.push(s[i]);
            //cout<<st.top()<<endl;
        }
        return st.size();
    }
};