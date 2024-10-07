class Solution {
public:
    int minLength(string s) {
        int n = s.size();
        for(int i=0;i<s.size()-1;i++){
            if(i==n) break;
            string temp = "";
            temp += s[i];
            temp += s[i+1];
            if(temp == "AB" || temp=="CD"){
                auto start  = s.begin()+i;
                auto end  = s.begin()+i+2;
                s.erase(start,end);
                if(i>0) i=i-2;
                else i = -1;
            }
        }

        return s.size();
    }
};