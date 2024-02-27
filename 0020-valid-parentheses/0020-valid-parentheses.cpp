class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1)
            return false;
        stack<int> stk;
        int len=s.size();
        //cout<<len<<endl;
        //stk.push(s[0]);
        //cout<<int (s[0])<<endl;
        for(int i=0;i<len;i++)
        {
            int val=int (s[i]);
            //int top=int (stk.top());
            //cout<<val<<endl;
            if((val==40) || (val==41))
            {
                if(val==40)
                    stk.push(1);
                else if(!stk.empty())
                {
                    if( (int)stk.top()==1)
                   stk.pop();
                    else
                        stk.push(11);
                }
                else
                    stk.push(11);
            }
            else if((val==91) || (val==93))
            {
                if(val==91)
                    stk.push(2);
                else if(!stk.empty())
                {
                    if((int)stk.top()==2)
                    stk.pop();
                    else
                        stk.push(22);
                }
                else
                    stk.push(22);
            }
            else
            {
                if(val==123)
                    stk.push(3);
                else if(!stk.empty())
                {
                    if((int)stk.top()==3)
                   stk.pop();
                    else
                        stk.push(33);
                }
                else
                    stk.push(33);
            }
            //cout<<stk.top()<<endl;
        }
        if(stk.empty())
            return true;
        return false;
    }
};