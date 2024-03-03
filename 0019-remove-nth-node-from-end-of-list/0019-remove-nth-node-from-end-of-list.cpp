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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* ans=temp;
        int len=0;
        while(head)
        {
            len++;
            head=head->next;
        }
        if (len==1)
        return NULL;
        int pos=(len-n);
        int pnt=1;
        if (pos==0)
        {
            temp=temp->next;
            return temp;
        }
        while(temp)
        {
            if(pnt==pos)
            {
                temp->next=temp->next->next;
                break;
            }
            temp=temp->next;
            pnt++;
        }
        return ans;
    }
};