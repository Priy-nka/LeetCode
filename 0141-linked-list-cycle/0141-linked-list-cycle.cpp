/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        ListNode* fast=head->next;
        ListNode* slow=head;
        while(fast)
        {
            if(fast==slow)
                return true;
            slow=slow->next;
            if (fast->next==NULL || fast->next->next==NULL)
                return false;
            fast=fast->next->next;
        }
        return false;
    }
};