class Solution {
public:
    int minLength(string s) {
        int n = s.size();
        // s+="LLLL";
        for(int i=0;i<s.size()-1;i++){
            if(i==n) break;
            string temp = "";
            temp += s[i];
            temp += s[i+1];
            cout<<temp<<endl;
            if(temp == "AB" || temp=="CD"){
                auto start  = s.begin()+i;
                auto end  = s.begin()+i+2;
                // cout<<i<<" : "<<s<<endl;
                s.erase(start,end);
                cout<<i<<" : "<<s<<endl;
                if(i>0) i=i-2;
                else i = -1;

                // i=i-2;
            }
        }
        // if(s == "AB" || s=="CD") return 0;

        return s.size();
    }
};