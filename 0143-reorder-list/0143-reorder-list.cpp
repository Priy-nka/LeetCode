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
    void reorderList(ListNode* head) {
//         if(!head->next || !head->next->next)
//         return;
//         ListNode* rev = new ListNode();
//         ListNode* nor=head;
//         rev->val=head->val;
//         rev->next=NULL;
//         head=head->next;
//         int len=1; 
//         //cout<<rev->val<<endl;
//         while(head)
//         {
//             ListNode* temp = new ListNode();
//             temp->val=head->val;
//             temp->next=rev;
//             rev=temp;
//             //nor=nor->next;
//             head=head->next;
//             len++;
//             //cout<<rev->val<<endl;
//         }

//         /*while(rev)
//         {
//             cout<<rev->val<<endl;
//             rev=rev->next;
//         }*/
//         //cout<<len<<endl;
//         int flag=2;
//         ListNode* ans = new ListNode();
//         ans->val=nor->val;
//         ans->next=NULL;
//         nor=nor->next;
//         len=len-1;
//         head=ans;
//         /*while(head)
//         {
//             cout<<head->val<<endl;
//             head=head->next;
//         }*/
//         while(len--)
//         {
//             if(flag%2==0)
//             {
//                 ListNode* curr = new ListNode();
//                 curr->val=rev->val;
//                 ans->next= curr;
//                 curr->next=NULL;
//                 //ans=curr;
//                 ans=ans->next;
//                 //nor=nor->next;
//                 rev=rev->next;
//                 flag++;
//             }
//             else
//             {
//                 ListNode* curr = new ListNode();
//                 curr->val=nor->val;
//                 ans->next=curr;
//                 curr->next=NULL;
//                 //ans=curr;
//                 ans=ans->next;
//                 nor=nor->next;
//                 //rev=rev->next;
//                 flag++;
//             }
//         }
//         while(head)
//         {
//             cout<<head->val<<endl;
//             head=head->next;
//         }
        if (!head || !head->next)
            return;

        vector<ListNode*> arr;
        ListNode* temp = head;

        while (temp != nullptr) {
            arr.push_back(temp);
            temp = temp->next;
        }

        int i = 0, j = arr.size() - 1;
        while (i < j) {
            arr[i]->next = arr[j];
            i++;

            if (i == j) break;

            arr[j]->next = arr[i];
            j--;
        }
        arr[i]->next = nullptr;
    }
};