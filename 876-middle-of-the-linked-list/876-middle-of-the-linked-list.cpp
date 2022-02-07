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
        ListNode *temp=head;
        int l=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            l++;
        }
        cout<<l;
        ListNode* slow=head;
        ListNode* fast=head;
        if(l%2==1)
        {
            while(fast!=NULL &&  fast->next!=NULL)
            {
                slow=slow->next;
                fast=fast->next->next;
            }
            return slow;
        }
        else
        {
            while(fast!=NULL && fast->next!=NULL)
            {
                slow=slow->next;
                fast=fast->next->next;
            }
            return slow;
        }
    
    }
};