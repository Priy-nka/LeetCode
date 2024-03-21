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
    ListNode* reverseList(ListNode* head) {
        if(!head)
        return NULL;
        ListNode* reverse = new ListNode();
        reverse->val=head->val;
        reverse->next=NULL;
        //reverse=head;
        head=head->next;
        while(head!=NULL)
        {
            ListNode* temp=new ListNode();
            temp->val=head->val;
            temp->next=reverse;
            reverse=temp;
            head=head->next;
        }
        return reverse;
    }
};