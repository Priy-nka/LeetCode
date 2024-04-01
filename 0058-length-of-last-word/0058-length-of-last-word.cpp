class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.size()-1, size=0;
        if (s[len]==' ')
        {
            for (int i=len;i>=0; i--)
            {
                if(s[i]!=' ')
                {
                    len=i;
                    i=-1;
                }     
            }
        }
        while (len>=0 && s[len]!=' ')
        {
            size++;
            len--;
            //if (len<0)
                
        }
        return size;
    }
};