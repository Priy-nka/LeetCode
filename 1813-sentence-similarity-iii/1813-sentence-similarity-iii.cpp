class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
       vector<string> s1; vector<string> s2;
        string temp="";
        for (int i=0; i<sentence1.size(); i++)
        {
            if(sentence1[i]==' ')
            {
                s1.push_back(temp);
                temp="";
            }
            else if (i==sentence1.size()-1)
            {
                temp+=sentence1[i];
                s1.push_back(temp);
                temp="";
            }
            else
                temp+=sentence1[i];
        }
        for (int i=0; i<sentence2.size(); i++)
        {
            if(sentence2[i]==' ')
            {
                s2.push_back(temp);
                temp="";
            }
            else if (i==sentence2.size()-1)
            {
                temp+=sentence2[i];
                s2.push_back(temp);
            }
            else
                temp+=sentence2[i];
        }
        int n1=s1.size(), n2=s2.size();
        int i1=0, j1=n1-1;
        int i2=0, j2=n2-1;
        if (n1>n2)
        {
            while (i2<=j2)
            {
                if (s2[i2] == s1[i1]){i2++;i1++;}
                else if (s2[j2] == s1[j1]){ j2--; j1--;}
                else return false;
            }
        }
        else
        {
            while (i1<=j1)
            {
                if (s1[i1] == s2[i2]) {i1++; i2++;}
                else if (s1[j1] == s2[j2]){ j1--; j2--; }
                else return false;
            }
        }
        
        return true;
    }
};