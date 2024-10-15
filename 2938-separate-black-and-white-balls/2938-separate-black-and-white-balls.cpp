// class Solution {
// public:
//     long long minimumSteps(string s) {
//         long long sum=0;
//         int n=s.size(), last=n-1;
//         int i=0, j=n-1;
//         if (s[n-1]=='0')
//             last=n;
//         else
//         {
//         while (s[last]=='1')
//         {
//             last--;
//             j=last-1;
//         }
//             last++; j++;
//         }
//         //cout<<last<< " "<<j<<endl;
//         while (i<j)
//         {
//             if (i==j)
//             {
//                 if (s[i]=='1')
//                 {
//                     sum+=last-i-1;
//                     last--;
//                     i++;
//                 }
//             }
//             if (s[i]=='1')
//             {
//                 sum+=(last-i-1);
//                 last--;
//                 i++;
//                 j=last-1;
//                 cout<<sum<<endl;
//             }
//             if (s[j]=='1')
//             {
//                 sum+=(last-j-1);
//                 last--;
//                 j=last-1;
//                 i++;
//             }
//             else
//             {
//                 i++;
//                 j=last-1;
//             }
//         }
        
//         return sum;
//     }
// };
class Solution {
public:
    long long minimumSteps(string s) {
        long long swap = 0;
        int black = 0; 
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') 
                swap += (long long) black; 
            else
                black++; 
        }
        return swap;
    }
};