class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size()==0)
            return 0;
        if (s.size()==1)
            return 1;
        if (s.size()==2)
        {
            if (s[0]==s[1])
                return 1;
            return 2;
        }
        int len=s.size(), l=0, r=1,  maxSize=1;
        while (r<len)
        {
            int flag=0;
            for (int i=l;i<r;i++)
            {
                if (s[i]==s[r])
                {
                    flag=1;
                    i=r+1;
                }
            }
            if (flag==0)
            {
                if ((r-l+1)>maxSize)
                    maxSize=r-l+1;
                r++;
            }
            else
            {
                l++;
                r=l+1;
            }
        }
        return maxSize;
    }
};