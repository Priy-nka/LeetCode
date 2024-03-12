/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        int prefix_sum = 0;
        std::unordered_map<int, ListNode*> prefix_sums;
        prefix_sums[0] = dummy;
        ListNode* current = head;

        while (current) {
            prefix_sum += current->val;
            if (prefix_sums.find(prefix_sum) != prefix_sums.end()) {
                ListNode* to_delete = prefix_sums[prefix_sum]->next;
                int temp_sum = prefix_sum + to_delete->val;
                while (to_delete != current) {
                    prefix_sums.erase(temp_sum);
                    to_delete = to_delete->next;
                    temp_sum += to_delete->val;
                }
                prefix_sums[prefix_sum]->next = current->next;
            } else {
                prefix_sums[prefix_sum] = current;
            }
            current = current->next;
        }

        return dummy->next;
//         vector<int> arr, temp;
//         while (head)
//         {
//             arr.push_back(head->val);
//             head=head->next;
//         }
//         ListNode* ans = nullptr;
//         map<int, int>mp, curr;
//         int len=arr.size();
//         for(int i=0; i<len; i++)
//         {
//             mp[i]+=arr[i];
//             for(int j=0; j<i; j++)
//             {
//                 //if ()
//                 mp[j]+=arr[i];
//                 //cout<<i<<" "<<j<<" "<<mp[j]<<endl;
//                 if (mp[j]==0)
//                     curr[j]=i;        
//             }
//         }
//         for(auto x:curr)
//         {
//             for (int p=0; p<len; p++)
//             {
//                 if (p<x.first || p>x.second)
//                     temp.push_back(arr[p]);
//             }
//             break;
//         }
        
//         //ans->val=temp[0];
//         for (int x=temp.size()-1; x>=0; x--)
//         {
//             ListNode* New = new ListNode();
//             New->val=temp[x];
//             New->next= ans;
//             ans=New;
//             //ans=ans->next;
//         }
//         ListNode* real = ans;
//         return real;
    }
};