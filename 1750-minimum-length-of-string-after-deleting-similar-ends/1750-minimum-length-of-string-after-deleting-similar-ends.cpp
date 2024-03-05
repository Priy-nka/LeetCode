class Solution {
public:
    int minimumLength(string s) {
        if(s.size()==1)
            return 1;
        int ans,low=0, high=s.size()-1,diff=0;
        if (s[low]==s[high])
            diff+=2;
        else
            return s.size();
        low++;
        high--;
        while (low<high)
        {
//             if(high-low==2)
//             {
//                 if (s[low]==s[low+1])
//                 {
//                     diff+=2;
//                     low++;
//                 }
                
//             }
            if(s[low]==s[high])
            {
                diff=diff+2;
                low++;
                high--;
                if (high==low)
                {
                    if(s[low]==s[low-1] || s[high]==s[high+1])
                        diff+=1;
                }
                    
            }
            else if (s[low]==s[low-1])
            {
                diff+=1;
                low++;
                if (high==low)
                {
                    if(s[low]==s[low-1] || s[high]==s[high+1])
                        diff+=1;
                }
            }
            else if (s[high]==s[high+1])
            {
                diff+=1;
                high--;
                if (high==low)
                {
                    if(s[low]==s[low-1] || s[high]==s[high+1])
                        diff+=1;
                }
            }
            else
                low=high;
        }
        ans=s.size()-diff;
        return ans;
    }
};