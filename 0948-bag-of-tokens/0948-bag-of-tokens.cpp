class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0,len=tokens.size();
        sort(tokens.begin(),tokens.end());
        // for(int i=0;i<len;i++)
        // {
        //     if(power>=tokens[i])
        //     {
        //         score++;
        //         power=power-tokens[i];
        //     }
        //     else if (score>=1)
        //     {
        //         power=power+tokens[i];
        //         score--;
        //     }
        // }
        int low=0, high=len-1;
        // if(tokens[low]<=power)
        // {
        //     score++;
        //     power=power-tokens[low];
        //     low++;
        // }
        // else
        //     return 0;
         if(len<=2)
         {
             if (len==0)
                 return 0;
             else if(len==1)
             {
                 if (tokens[0]<=power)
                     return 1;
             }
             else
             {
                 if(tokens[0]<=power)
                 {
                     score=1;
                     power=power-tokens[0];
                 }
                 if(tokens[1]<=power)
                     score++;
                 return score;
             }
         }
        while (low<=high)
        {
            if (tokens[low]<=power)
            {
                score++;
                power=power-tokens[low];
                low++;
            }
            else if (score>=1 && (high-low)>1)
            {
                score--;
                power=power+tokens[high];
                high--;
            }
            else
                break;
        }
        return score;
    }
};