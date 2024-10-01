class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        
//         if (arr.size()==0)
//             return false;
//         if (arr.size()<=4)
//         {
//             if (arr.size()==2)
//             {
//                 if ((arr[0]+arr[1])%k==0)
//                     return true;
//                 return false;
//             }
//             if (arr.size()==4)
//             {
//                 if ((arr[0]+arr[1])%k==0 && (arr[2]+arr[3])%k==0)
//                     return true;
//                 else if ((arr[0]+arr[2])%k==0 && (arr[1]+arr[3])%k==0)
//                     return true;
//                 return false;
//             }
//         }
        
//         map<int, int>mp;
//         sort(arr.begin(), arr.end());
//         // for (int x:arr)
//         // {
//         //     cout<<x<<endl;
//         // }
//         int n=arr.size();
//         int i=0, j=n/2;
//         vector<int> temp;
//         while (i<n/2 && j<n)
//         {
            
//             if ((arr[i]+arr[j])%k==0)
//             {
//                 temp.push_back(arr[i]);
//                 temp.push_back(arr[j]);
//                 mp[i]=arr[i];
//                 mp[j]=arr[j];
//                 i++;
//                 j=n/2;
//             }
//             else if (j==n-1)
//             {
//                 j=n/2;
//                 i++;
//             }
//             else
//             {
//                 j++;
//             }
//         }
//         // for (int q:temp)
//         // {
//         //     cout<<q<<endl;
//         // }
//         if (temp.size()==n)
//             return true;
//         i=0; j=(n/2)-1;
//         while (i!=j)
//         {
//             if ((arr[i]+arr[j])%k==0)
//             {
//                 if (!mp[i])
//                 {
//                 temp.push_back(arr[i]);
//                     mp[i]=arr[i];
//                 }
//                 if (!mp[j])
//                 {
//                 temp.push_back(arr[j]);
//                     mp[j]=arr[j];
//                 }
//                 i++;
//                 j=(n/2)-1;
//             }
//             else if (j==i+1)
//             {
//                 i++;
//                 j=(n/2)-1;
//             }
//             j--;
//         }
//         i=n/2; j=n-1;
//         while (i!=j)
//         {
//             if ((arr[i]+arr[j])%k==0)
//             {
//                 if (!mp[i])
//                 {
//                 temp.push_back(arr[i]);
//                     mp[i]=arr[i];
//                 }
//                 if (!mp[j])
//                 {
//                 temp.push_back(arr[j]);
//                     mp[j]=arr[j];
//                 }
//                 i++;
//                 j=n-1;
//             }
//             else if (j==i+1)
//             {
//                 i++;
//                 j=n-1;
//             }
//             j--;
//         }
//         // for (int p:temp)
//         // {
//         //     cout<<p<<endl;
//         // }
//         if (temp.size()==n)
//             return true;
//         return false;
        
        
         vector<int> freq(k, 0);
        
        for (int num : arr) {
            int remainder = ((num % k) + k) % k;
            freq[remainder]++;
        }
   
        if (freq[0] % 2 != 0) return false; 
        
        for (int i = 1; i <= k / 2; i++) {
            if (freq[i] != freq[k - i]) return false; 
        }
        
        return true;
    }
    
};