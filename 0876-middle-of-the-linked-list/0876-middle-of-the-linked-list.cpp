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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int l=0,t=0;
        while (temp)
        {
            l++;
            temp=temp->next;
        }
        l=l/2;
        while (t<l)
        {
            t++;
            head=head->next;
        }
        return head;
            
    }
};