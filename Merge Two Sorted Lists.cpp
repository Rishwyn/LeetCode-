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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(-1);
        ListNode* last=&dummy;
        while(l1!=NULL&&l2!=NULL)
        {
            if(l1->val < l2->val)
            {
                last->next=l1;
                last=l1;
                l1=l1->next;
            }
            else
            {
                last->next=l2;
                last=l2;
                l2=l2->next;
            }
        }
        if(l2!=NULL)
        {
            last->next=l2;
        }
        if(l1!=NULL)
        {
            last->next=l1;
        }
        return dummy.next;
    }
};
